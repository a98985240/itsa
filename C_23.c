/*[C_RU23-易] 遞迴練習*/
#include<stdio.h>


double f(double n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return (f(n-1)+2)/2;
    }
    
}

int main()
{
    int n;
    scanf("%d",&n);
    double ans=f(n);
    printf("%.5f\n",ans);
}
