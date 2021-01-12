/*[C_AR72-易] 電影票購買計算*/
#include<stdio.h>

int main()
{
    int times;
    scanf("%d",&times);
    for(int i=0;i<times;i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        printf("%d\n",250*a+175*b);
    }
}