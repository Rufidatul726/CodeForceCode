#include<stdio.h>
#include<string.h>

int main(void){
          int i,j;
          char a[101],t;

          gets(a);

          for(i=2;i<strlen(a);i=i+2){
               for(j=0;j<i;j=j+2){
                    if(a[j]>a[i]){
                         t=a[j];
                         a[j]=a[i];
                         a[i]=t;
                    }
               }
          }

          printf("%s",a);
          return 0;
}
