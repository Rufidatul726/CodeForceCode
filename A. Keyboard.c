#include<stdio.h>
#include<string.h>

int main(void){
    int i,j,k=1;
    char q[30]="qwertyuiopasdfghjkl;zxcvbnm,./";

    char s[101],a;

    scanf("%c",&a);
    if(a=='R')k=-1;
    scanf("%s",s);


   for(i=0;i<strlen(s);i++){
        for(j=0;j<strlen(q);j++){
            if(s[i]==q[j]){
                s[i]=q[j+k];
                break;
            }
        }
   }

   printf("%s\n",s);
}
