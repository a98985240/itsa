/*圈圈叉叉*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[3][3];
    while (scanf("%d %d %d", &array[0][0], &array[0][1], &array[0][2]) != EOF)
    {
        int sw = 0;
        scanf("%d %d %d", &array[1][0], &array[1][1], &array[1][2]);
        scanf("%d %d %d", &array[2][0], &array[2][1], &array[2][2]);
        for (int i = 0; i < 3; i++)
        {
            if (array[i][0] == array[i][1] && array[i][1] == array[i][2] && array[i][2] == array[i][0])
            {
                sw = 1;
            }
            if (array[0][i] == array[1][i] && array[1][i] == array[2][i] && array[2][i] == array[0][i])
            {
                sw = 1;
            }
        }
        if (array[0][0] == array[1][1] && array[1][1] == array[2][2] && array[2][2] == array[0][0])
        {
            sw = 1;
        }
        if (array[0][2] == array[1][1] && array[1][1] == array[2][0] && array[0][2] == array[2][0])
        {
            sw = 1;
        }
        if(sw==1){
            printf("True\n");
        }
        else
        {
            printf("False\n");
        }
        
    }
}
