#include<stdio.h>
#include<string.h>
int main(void){
        long int a,j=0,k=0,i;

        scanf("%ld",&a);

        char s[a+1];

        scanf("%s",s);

        for(i=0;i<strlen(s);i++){
            if(s[i]=='z')j++;
            if(s[i]=='n')k++;
        }

        for(i=0;i<k;i++){
            printf("1 ");
        }
        for(i=0;i<j;i++){
            printf("0 ");
        }
}
