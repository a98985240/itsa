/*矩陣數字顯示*/
#include <stdio.h>

int main()
{
    char str[4];
    while (scanf("%s", str) != EOF)
    {
        for (int i = 0; i < 4; i++)
        {
            if (str[i] == '0' || str[i] == '2' || str[i] == '3' || str[i] == '5' || str[i] == '7' || str[i] == '8' || str[i] == '0' || str[i] == '9')
            {
                printf("*****");
            }
            if (str[i] == '1')
            {
                printf("    *");
            }
            if (str[i] == '4')
            {
                printf("*   *");
            }
            if (str[i] == '6')
            {
                printf("*    ");
            }
            if (i < 3)
            {
                printf(" ");
            }
        }
        printf("\n");
        for (int i = 0; i < 4; i++)
        {
            if (str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '7')
            {
                printf("    *");
            }
            if (str[i] == '0' || str[i] == '4' || str[i] == '8' || str[i] == '9')
            {
                printf("*   *");
            }
            if (str[i] == '5' || str[i] == '6')
            {
                printf("*    ");
            }
            if (i < 3)
            {
                printf(" ");
            }
        }
        printf("\n");
        for (int i = 0; i < 4; i++)
        {
            if (str[i] == '0')
            {
                printf("*   *");
            }
            if (str[i] == '1' || str[i] == '7')
            {
                printf("    *");
            }
            if (str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '8' || str[i] == '9')
            {
                printf("*****");
            }
            if (i < 3)
            {
                printf(" ");
            }
        }
        printf("\n");
        for (int i = 0; i < 4; i++)
        {
            if (str[i] == '0' || str[i] == '6' || str[i] == '8')
            {
                printf("*   *");
            }
            if (str[i] == '1' || str[i] == '3' || str[i] == '4' || str[i] == '5' || str[i] == '7' || str[i] == '9')
            {
                printf("    *");
            }
            if (str[i] == '2')
            {
                printf("*    ");
            }
            if (i < 3)
            {
                printf(" ");
            }
        }
        printf("\n");
        for (int i = 0; i < 4; i++)
        {
            if (str[i] == '0' || str[i] == '2' || str[i] == '3' || str[i] == '5' || str[i] == '6' || str[i] == '8')
            {
                printf("*****");
            }
            if (str[i] == '1' || str[i] == '4' || str[i] == '7' || str[i] == '9')
            {
                printf("    *");
            }
            if (i < 3)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
