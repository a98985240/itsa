/*[C_AR74-中] 學生資料搜尋程式*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student
{
    int number;
    char name[10];
    char major[10];
} students[5];

int main()
{
    students[0].number = 123;
    strcpy(students[0].name, "Tom");
    strcpy(students[0].major, "DTGD");
    students[1].number = 456;
    strcpy(students[1].name, "Cat");
    strcpy(students[1].major, "CSIE");
    students[2].number = 789;
    strcpy(students[2].name, "Nana");
    strcpy(students[2].major, "ASIE");
    students[3].number = 321;
    strcpy(students[3].name, "Lim");
    strcpy(students[3].major, "DBA");
    students[4].number = 654;
    strcpy(students[4].name, "Won");
    strcpy(students[4].major, "FDD");

    int times;
    scanf("%d", &times);
    for (int i = 0; i < times; i++)
    {
        int num;
        scanf("%d", &num);
        if (num == 1)
        {
            int number;
            scanf("%d", &number);
            for (int j = 0; j < 5; j++)
            {
                if (students[j].number == number)
                {
                    printf("%d %s %s\n", students[j].number, students[j].name, students[j].major);
                    break;
                }
            }
        }
        else if (num == 2)
        {
            char name[10];
            scanf("%s", name);
            for (int j = 0; j < 5; j++)
            {
                if (strcmp(students[j].name, name) == 0)
                {
                    printf("%d %s %s\n", students[j].number, students[j].name, students[j].major);
                    break;
                }
            }
        }
        else if (num == 3)
        {
            char major[10];
            scanf("%s", major);
            for (int j = 0; j < 5; j++)
            {
                if (strcmp(students[j].major, major) == 0)
                {
                    printf("%d %s %s\n", students[j].number, students[j].name, students[j].major);
                    break;
                }
            }
        }
    }
}