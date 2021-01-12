/*ISBN驗證*/
#include <stdio.h>

int main()
{
    int sum = 0;
    int array[10];
    int array2[10] = {0};
    int array3[10] = {0};
    for (int i = 0; i < 10; i++)
    {
        char tmp;
        scanf("%c", &tmp);
        getchar();
        if (tmp == '0')
        {
            array[i] = 0;
        }
        else if (tmp == '1')
        {
            array[i] = 1;
        }
        else if (tmp == '2')
        {
            array[i] = 2;
        }
        else if (tmp == '3')
        {
            array[i] = 3;
        }
        else if (tmp == '4')
        {
            array[i] = 4;
        }
        else if (tmp == '5')
        {
            array[i] = 5;
        }
        else if (tmp == '6')
        {
            array[i] = 6;
        }
        else if (tmp == '7')
        {
            array[i] = 7;
        }
        else if (tmp == '8')
        {
            array[i] = 8;
        }
        else if (tmp == '9')
        {
            array[i] = 9;
        }
        else if (tmp == 'X')
        {
            array[i] = 10;
        }
    }
    for (int j = 0; j < 10; j++)
    {
        for (int k = 0; k <= j; k++)
        {
            array2[j] += array[k];
        }
    }
    for (int j = 0; j < 10; j++)
    {
        for (int k = 0; k <= j; k++)
        {
            array3[j] += array2[k];
        }
    }
    if (array3[9] % 11 == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
