#include<stdio.h>
#include<string.h>

int main(void){
          int i,j=0;
          char a[100],b[100];

          gets(a);
          gets(b);
          printf("%d\n%d\n",strlen(a),strlen(b));
          if(strlen(a)>strlen(b)){
               printf("1");
          }
          else if(strlen(b)>strlen(a)){
               printf("-1");
          }

          for(i=0;i<strlen(a);i++){
               if(a[i]>64 && a[i]<91){
                    a[i]=a[i]+32;
               }
               if(b[i]>64 && b[i]<91){
                    b[i]=b[i]+32;
               }
          }
          if(strcmp(b,a)==0){
               printf("0");
          }
          else if(strlen(a)==strlen(b)){
               for(i=0;i<strlen(a);i++){
                    if(a[i]>b[i]){
                         printf("1");
                         break;
                    }
                    else if(a[i]<b[i]){
                         printf("-1");
                         break;
                    }
                    else if(a[i]==b[i]){
                         continue;
                    }
               }
          }
          return 0;
}

