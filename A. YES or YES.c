#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
    int t,i;

    scanf("%d", &t);

    while(t--){
        char string[5];
        char upper[5];

        scanf("%s",string);

        for(i=0;i<strlen(string);i++)if(string[i]<='Z')string[i]=string[i]+32;
        if(strcmp(string,"yes")==0)printf("YES\n");
        else printf("NO\n");
    }
}
