#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input;
    while (scanf("%d", &input) != EOF)
    {
        int sw = 0;
        for (int i = 2; i < input; i++)
        {
            if (input % i == 0)
            {
                sw = 1;
            }
        }
        if (sw == 1)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
}