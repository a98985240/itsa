/*判斷是否為迴文*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char str[20];
    while(scanf("%s",str)!=EOF)
    {
        int sw=1;
        int len=strlen(str);
        for(int i=0;i<len;i++)
        {
            if(str[i]!=str[len-1-i])
            {
                printf("NO\n");
                sw=0;
                break;
            }
        }
        if(sw==1)
        {
            printf("YES\n");
        }
        memset(str,'\0',20);
    }
}
