#include<stdio.h>
#include<stdlib.h>

int main(){
    int x,y;
    while(scanf("%d %d",&x,&y)!=EOF)
    {
        double distance=(x*x+y*y);
        if(distance<=10000)
        {
            printf("inside\n");
        }
        else
        {
            printf("outside\n");
        }
        
    }
}