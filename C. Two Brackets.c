#include<stdio.h>
#include<string.h>

int main(void){
    int fbs,fbe,sbs,sbe,t,i,a,k;
    char s[200003];

    scanf("%d",&t);

    while(t--){
            fbs=0;fbe=0;sbs=0;sbe=0;
        scanf("%s",&s);

        for(i=0;i<strlen(s);i++){
            if(s[i]=='(')fbs++;
            if(s[i]=='[')sbs++;
            if(s[i]==')' && fbs>0 && fbe<fbs)fbe++;
            if(s[i]==']' && sbs>0 && sbe<sbs)sbe++;
        }

        printf("%d\n",sbe+fbe);
    }
}
