/*[C_RU25-易] 遞迴練習*/

#include <stdio.h>

int g(int);

int f(int n)
{
    if (n == 1)
    {
        return 2;
    }
    else
    {
        return 3*f(n - 1) + g(n - 1);
    }
}

int g(int n)
{
    if (n == 1)
    {
        return -6;
    }
    else
    {
        return (-1)*f(n - 1) + g(n - 1);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d ", f(n));
    printf("%d\n", g(n));
}
