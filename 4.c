#include<stdio.h>

int main()
{
    int start_hr,start_min,end_hr,end_min;
    int total_hour=0,total_min=0,total=0,fee=0;
    scanf("%d %d",&start_hr,&start_min);
    scanf("%d %d",&end_hr,&end_min);
    if(end_min-start_min<0)
    {
        end_min+=60;
        if(end_hr>=1)
        {
            end_hr--;
        }
        else
        {
            end_hr=23;
        }
    }
    if(end_hr<start_hr)
    {
        total_hour=start_hr+(24-end_hr);
    }
    else
    {
        total_hour=end_hr-start_hr;
    }
    total_min=end_min-start_min;
    total=total_hour*60+total_min;
    if(total<=120)
    {
        fee=30*(total/30);
    }
    else if(total>120&&total<=240)
    {
        fee+=30*4;
        fee+=((total-120)/30)*40;
    }
    else if(total>240)
    {
        fee+=30*4;
        fee+=40*4;
        fee+=((total-240)/30)*60;
    }
    printf("%d\n",fee);
}