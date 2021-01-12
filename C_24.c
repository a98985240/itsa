/*[C_RU24-易] 遞迴練習*/
#include<stdio.h>


double f(double n)
{
    if(n==1)
    {
        return 2;
    }
    else
    {
        return (2*f(n-1))/(1+2*f(n-1));
    }  
}


int main()
{
    int n;
    scanf("%d",&n);
    double ans=f(n);
    printf("%.5f\n",ans);
}
