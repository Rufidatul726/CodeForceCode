#include<stdio.h>
#include<string.h>

int main(void){
     int i,j,k=0;
     char s[101],p[101];

     gets(s);

         for(i=0;i<strlen(s);i++){
            if(s[i]=='h'){
                k++;
                s[i]=' ';
                break;
            }
            else{
                s[i]=' ';
            }
         }

         for(i=0;i<strlen(s);i++){
            if(s[i]=='e'){
                k++;
                s[i]=' ';
                break;
            }
            else{
                s[i]=' ';
            }
         }

         for(i=0;i<strlen(s);i++){
            if(s[i]=='l'){
                k++;
                s[i]=' ';
                break;
            }
            else{
                s[i]=' ';
            }
         }

         for(i=0;i<strlen(s);i++){
            if(s[i]=='l'){
                k++;
                s[i]=' ';
                break;
            }
            else{
                s[i]=' ';
            }
         }

         for(i=0;i<strlen(s);i++){
            if(s[i]=='o'){
                k++;
                s[i]=' ';
                break;
            }
            else{
                s[i]=' ';
            }
         }

        if(k==5){
            printf("YES");
        }

     else
          printf("NO");

     return 0;
}
