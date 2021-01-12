/*英哩轉公里*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a;
    double b;
    while(scanf("%d",&a)!=EOF){
        b=(double)a*1.6;
        printf("%.1f\n",b);
    }
}
