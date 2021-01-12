/*計算電費*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int input;
    scanf("%d",&input);
    float summer,non_summer;
    if(input<=120)
    {
        summer=(float)input*(2.1);
        non_summer=(float)input*(2.1);
    }
    else if(input>=121&&input<=330)
    {
        summer=(float)(input-120)*(3.02)+120*2.1;
        non_summer=(float)(input-120)*(2.68)+120*2.1;
    }
    else if(input>=331&&input<=500)
    {
        summer=(float)(input-330)*(4.39)+(330-120)*3.02+120*2.1;
        non_summer=(float)(input-330)*(3.61)+(330-120)*2.68+120*2.1;
    }
    else if(input>=501&&input<=700)
    {
        summer=(float)(input-500)*(4.97)+(500-330)*4.39+(330-120)*3.02+120*2.1;
        non_summer=(float)(input-500)*(4.01)+(500-330)*(3.61)+(330-120)*2.68+120*2.1;
    }
    else if(input>=701)
    {
        summer=(float)(input-700)*(5.63)+(700-500)*(4.97)+(500-330)*4.39+(330-120)*3.02+120*2.1;
        non_summer=(float)(input-700)*(4.50)+(700-500)*(4.01)+(500-330)*(3.61)+(330-120)*2.68+120*2.1;
    }
    printf("Summer months:%.2f\n",summer);
    printf("Non-Summer months:%.2f\n",non_summer);
}
