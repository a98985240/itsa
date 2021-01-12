/*[C_AR53-易] 學生成績排序*/

#include <stdio.h>
#include<math.h>
#include<stdlib.h>

int cmp(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

int main()
{
    int n;
    scanf("%d", &n);
    int *array;
    array=(int *)malloc(sizeof(int)*n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &*(array + i));
    }
    qsort(array,n,sizeof(int),cmp);
    for(int i=0;i<n;i++)
    {
        printf("%d\n",*(array+i));
    }
}