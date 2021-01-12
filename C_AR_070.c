/*[C_AR70-易] 不要在太歲爺頭上動土*/
#include <stdio.h>

void print_the_result(int num)
{
    if (num == 0)
    {
        printf("monkey");
    }
    if (num == 1)
    {
        printf("rooster");
    }
    if (num == 2)
    {
        printf("dog");
    }
    if (num == 3)
    {
        printf("pig");
    }
    if (num == 4)
    {
        printf("rat");
    }
    if (num == 5)
    {
        printf("ox");
    }
    if (num == 6)
    {
        printf("tiger");
    }
    if (num == 7)
    {
        printf("rabbit");
    }
    if (num == 8)
    {
        printf("dragon");
    }
    if (num == 9)
    {
        printf("snake");
    }
    if (num == 10)
    {
        printf("horse");
    }
    if (num == 11)
    {
        printf("goat");
    }
}

int main()
{
    int year, num;
    scanf("%d", &year);
    num = year % 12;
    print_the_result(num);
    printf("\n");
    if(num>=6)
    {
        print_the_result(num-6);
    }
    else
    {
        print_the_result(num+6);
    }
    printf("\n");
}