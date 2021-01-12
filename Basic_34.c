/*標準體重計算*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    float height;
    int tinder;
    while(scanf("%f %d",&height,&tinder)!=EOF)
    {
        float output;
        if(tinder==1){
            output=(height-80)*0.7;
            printf("%.1f\n",output);
        }
        if(tinder==2)
        {
            output=(height-70)*0.6;
            printf("%.1f\n",output);
        }
    }
}
