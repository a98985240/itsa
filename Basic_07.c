/*複數運算*/
#include<stdio.h>

int main()
{
    int times;
    scanf("%d",&times);
    for(int i=0;i<times;i++)
    {
        char x;
        int a_real,a_ima,b_real,b_ima;
        int real,ima;
        scanf(" %c %d %d %d %d",&x,&a_real,&a_ima,&b_real,&b_ima);
        if(x=='-')
        {
            real=a_real-b_real;
            ima=a_ima-b_ima;
        }
        else if(x=='+')
        {
            real=a_real+b_real;
            ima=a_ima+b_ima;
        }
        else if(x=='*')
        {
            real=a_real*b_real-a_ima*b_ima;
            ima=a_real*b_ima+a_ima*b_real;
        }
        printf("%d %d\n",real,ima);
    }
}
