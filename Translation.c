#include<stdio.h>
#include<string.h>

int main(void){
        char s[101],t[101],p[101];
        int i,k;

        gets(s);
        gets(t);

        k=strlen(s);

        printf("%s\n",s);

        for(i=0;i<k;i++){
                p[i]=s[k-i];
                printf("%c",p);
        }
        p[i+1]='\0';

        if(strcmp(p,t)==0){
            printf("YES");
        }
        else
        printf("NO");

        return 0;
}
