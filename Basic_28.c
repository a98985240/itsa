/*統一發票對獎*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[7] = {0};
    int sum = 0;
    int times;
    char str1[9], str2[9], str3[9], str4[9];
    scanf("%s", str1);
    scanf("%s", str2);
    scanf("%s", str3);
    scanf("%s", str4);
    scanf("%d", &times);
    for (int i = 0; i < times; i++)
    {
        char test[9];
        scanf("%s", test);
        int same_times = 0;
        for (int j = 0; j < 8; j++)
        {
            if (str1[j] == test[j])
            {
                same_times++;
            }
        }
        if (same_times == 8)
        {
            array[0]++;
        }
        else
        {
            int min = 100;
            same_times = 0;
            for (int j = 7; j >= 0; j--)
            {
                if (str2[j] == test[j])
                {
                    same_times++;
                }
                else
                {
                    break;
                }
            }
            if (same_times == 3 && min > 6)
            {
                min = 6;
            }
            else if (same_times == 4 && min > 5)
            {
                min = 5;
            }
            else if (same_times == 5 && min > 4)
            {
                min = 4;
            }
            else if (same_times == 6 && min > 3)
            {
                min = 3;
            }
            else if (same_times == 7 && min > 2)
            {
                min = 2;
            }
            else if (same_times == 8 && min > 1)
            {
                min = 1;
            }
            same_times = 0;
            for (int j = 7; j >= 0; j--)
            {
                if (str3[j] == test[j])
                {
                    same_times++;
                }
                else
                {
                    break;
                }
            }
            if (same_times == 3 && min > 6)
            {
                min = 6;
            }
            else if (same_times == 4 && min > 5)
            {
                min = 5;
            }
            else if (same_times == 5 && min > 4)
            {
                min = 4;
            }
            else if (same_times == 6 && min > 3)
            {
                min = 3;
            }
            else if (same_times == 7 && min > 2)
            {
                min = 2;
            }
            else if (same_times == 8 && min > 1)
            {
                min = 1;
            }
            same_times = 0;
            for (int j = 7; j >= 0; j--)
            {
                if (str4[j] == test[j])
                {
                    same_times++;
                }
                else
                {
                    break;
                }
            }
            if (same_times == 3 && min > 6)
            {
                min = 6;
            }
            else if (same_times == 4 && min > 5)
            {
                min = 5;
            }
            else if (same_times == 5 && min > 4)
            {
                min = 4;
            }
            else if (same_times == 6 && min > 3)
            {
                min = 3;
            }
            else if (same_times == 7 && min > 2)
            {
                min = 2;
            }
            else if (same_times == 8 && min > 1)
            {
                min = 1;
            }
            if(min<10)
            {
                array[min]++;
            }
        }
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", array[i]);
    }
    printf("%d", array[6]);
    printf("\n");
    sum += 2000000 * array[0];
    sum += 200000 * array[1];
    sum += 40000 * array[2];
    sum += 10000 * array[3];
    sum += 4000 * array[4];
    sum += 1000 * array[5];
    sum += 200 * array[6];
    printf("%d\n", sum);
}
