/*[C_RU35-易] 解六組數列中之最大值*/

#include<stdio.h>

int main()
{
    int array[6];
    int max=0;
    for(int i=0;i<6;i++)
    {
        scanf("%d",&array[i]);
    }
    for(int i=0;i<6;i++)
    {
        if(array[i]>=max)
        {
            max=array[i];
        }
    }
    printf("%d\n",max);
}