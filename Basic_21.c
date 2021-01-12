/*最大值與最小值*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    float array[10];
    for(int i=0;i<10;i++){
        scanf("%f",&array[i]);
    }
    float max=-1000000;
    float min=1000000;
    for(int i=0;i<10;i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
        if(array[i]<min)
        {
            min=array[i];
        }
    }
    printf("maximum:%.2f\n",max);
    printf("minimum:%.2f\n",min);
}
