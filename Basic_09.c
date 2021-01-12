/*計算正整數被3整除之數值之總和*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input;
    while (scanf("%d", &input) != EOF)
    {
        int sum = 0;
        for (int i = 1; i <= input; i++)
        {
            if (i % 3 == 0)
            {
                sum += i;
            }
        }
        printf("%d\n",sum);
    }
}
