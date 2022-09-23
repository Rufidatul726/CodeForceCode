#include<stdio.h>
#include<string.h>

int main(void){
          char a[1000];
          int i,j;

          gets(a);

          for(i=0;i<strlen(a);i++){
               if(a[i]>64 && a[i]<91){
                    a[i]=a[i]+32;
               }
          }

          for(i=0;i<strlen(a);i++){
               if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='y'){
                    a[i]=' ';
               }
          }
          for(i=0;i<strlen(a);i++){
               if(a[i]==' '){
                    for(j=i;j<strlen(a);j++){
                         a[j]=a[j+1];
                    }
                    i=-1;
               }
          }
          i=strlen(a);
          for(j=strlen(a)*2+1;j>0;j=j-2){
               a[j]=a[i];
               i--;
               a[j-1]='.';
          }
          a[strlen(a)-1]='\0';
          printf("%s",a);

          return 0;
}
