#include<stdio.h>
#include<string.h>

int main(void){
     int i,j=0,n=0;
     char s[51]={0};

     scanf("%d",&n);

     for(i=0;i<=n;i++){
          scanf("%c",&s[i]);
     }

     for(i=1;i<=n;i++){
          if(s[i-1]==s[i]){
               j++;
          }
     }

     printf("%d",j);

     return 0;
}
