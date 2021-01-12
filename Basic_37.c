/*18啦遊戲設計*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[4];
    int same[4] = {0};
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (array[i] == array[j])
            {
                same[i]++;
            }
        }
    }
    if(same[0]==4)
    {
        printf("WIN\n");
    }
    else if(same[0]==1&&same[1]==1&&same[2]==1&&same[3]==1)
    {
        printf("R\n");
    }
    else
    {
        for(int i=0;i<4;i++){
            if(same[i]==3)
            {
                printf("R\n");
                break;
            }
            if(same[i]==2)
            {
                int sum=0;
                int same_times=1;
                for(int j=0;j<4;j++){
                    if(same[j]==1)
                    {  
                        sum+=array[j];
                    }
                    if(same[j]==2&&i!=j&&array[i]!=array[j])
                    {
                        if(array[i]>=array[j])
                        {
                            sum=2*array[i];
                        }
                        else
                        {
                            sum=2*array[j];
                        }
                        break;
                    }
                }
                printf("%d\n",sum);
                break;
            }
        }
    }
}
