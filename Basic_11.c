/*矩陣反轉*/
#include<stdio.h>

int main()
{
    int row,column;
    while(scanf("%d %d",&row,&column)!=EOF)
    {
        int array[row][column];
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                scanf("%d",&array[i][j]);
            }
        }
        for(int i=0;i<column;i++)
        {
            for(int j=0;j<row-1;j++)
            {
                printf("%d ",array[j][i]);
            }
            printf("%d",array[row-1][i]);
            printf("\n");
        }
    }
}
