/*遞迴程式練習*/
#include<stdio.h>


int recursion(int x)
{
    if(x==0||x==1)
    {
        return x+1;
    }
    else
    {
        return recursion(x-1)+recursion(x/2);
    }
}


int main()
{
    int x,ans;
    scanf("%d",&x);
    ans=recursion(x);
    printf("%d\n",ans);
}
