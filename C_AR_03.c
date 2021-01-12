/*[C_AR03-易] 計算陣列中所有元素的立方和*/
#include<stdio.h>

int main()
{
    int array[6],sum=0;
    for(int i=0;i<6;i++)
    {
        scanf("%d",&array[i]);
        sum+=array[i]*array[i]*array[i];
    }
    printf("%d\n",sum);
}