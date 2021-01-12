/*猜數字*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char str[5];
    char ans[5];
    scanf("%s",ans);
    scanf("%s",str);
    while(1)
    {
        if(strcmp(str,"0000")==0)
        {
            break;
        }
        int nums_of_a=0;
        int nums_of_b=0;
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++)
            {
                if(i==j&&str[j]==ans[i])
                {
                    nums_of_a++;
                }
                if(i!=j&&str[j]==ans[i])
                {
                    nums_of_b++;
                }
            }
        }
        printf("%dA%dB\n",nums_of_a,nums_of_b);
        scanf("%s",str);
    }
}
