#include <stdio.h>

int main()
{
    int x;
    while (scanf("%d", &x) !=EOF)
    {
        int array[8] = {0};
        if (x >= 0)
        {
            array[0] = 0;
            if (x >= 64)
            {
                x %= 64;
                array[1] = 1;
            }
            if (x >= 32)
            {
                x %= 32;
                array[2] = 1;
            }
            if (x >= 16)
            {
                x %= 16;
                array[3] = 1;
            }
            if (x >= 8)
            {
                x %= 8;
                array[4] = 1;
            }
            if (x >= 4)
            {
                x %= 4;
                array[5] = 1;
            }
            if (x >= 2)
            {
                x %= 2;
                array[6] = 1;
            }
            if (x == 1)
            {
                array[7] = 1;
            }
        }
        if (x < 0)
        {
            array[0] = 1;
            x += 128;
            if (x >= 64)
            {
                x %= 64;
                array[1] = 1;
            }
            if (x >= 32)
            {
                x %= 32;
                array[2] = 1;
            }
            if (x >= 16)
            {
                x %= 16;
                array[3] = 1;
            }
            if (x >= 8)
            {
                x %= 8;
                array[4] = 1;
            }
            if (x >= 4)
            {
                x %= 4;
                array[5] = 1;
            }
            if (x >= 2)
            {
                x %= 2;
                array[6] = 1;
            }
            if (x == 1)
            {
                array[7] = 1;
            }
        }
        for(int i=0;i<8;i++)
        {
            printf("%d",array[i]);
        }
        printf("\n");
    }
}