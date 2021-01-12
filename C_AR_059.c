/*[C_AR59-易] 好數問題*/
#include<stdio.h>
#include<string.h>

int main()
{
    int times;
    scanf("%d",&times);
    for(int i=0;i<times;i++)
    {
        char str[1000000];
        scanf("%s",str);
        int len=strlen(str);
        if(len!=4)
        {
            printf("Failure Input\n");
        }
        else
        {
            int same_times=0;
            for(int j=0;j<4;j++)
            {
                for(int k=j+1;k<4;k++)
                {
                    if(str[j]==str[k])
                    {
                        same_times++;
                    }
                }
            }
            if(same_times==1)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
            
        }
        
    }
}