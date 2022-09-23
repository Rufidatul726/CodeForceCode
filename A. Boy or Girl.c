#include<stdio.h>
#include<string.h>

int main(void){
          char a[101];
          int k,i,x,p=0;

        gets(a);
          k=strlen(a);

          for(i=0;i<k;i++){
              for(x=1;x<k;x++){
                     if(a[i]==a[i+x])
                         a[i+x]=' ';
              }
          }

          for(i=0;i<k;i++){
               if(a[i]!=' '){
                    p++;
               }
          }

          if(p%2==0){
               printf("CHAT WITH HER!");
          }
          else
               printf("IGNORE HIM!");
}
