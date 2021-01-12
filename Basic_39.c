/*考試測驗*/
#include<stdio.h>

int main()
{
    int times;
    scanf("%d",&times);
    for(int i=0;i<times;i++)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        int pass_times=0;
        if(a>=60)
        {
            pass_times++;
        }
        if(b>=60)
        {
            pass_times++;
        }
        if(c>=60)
        {
            pass_times++;
        }
        if(pass_times==3)
        {
            printf("P\n");
        }
        else if(pass_times==2&&(a+b+c>=220))
        {
            printf("P\n");
        }
        else if(pass_times==2&&(a+b+c<220))
        {
            printf("M\n");
        }
        else if(pass_times==1&&(a>=80||b>=80||c>=80))
        {
            printf("M\n");
        }
        else{
            printf("F\n");
        }
    }
}
