#include<stdio.h>
#include<string.h>

int main(void){
          char a[1001];

          gets(a);

          if(a[0]>=97 && a[0]<=122){
               a[0]=a[0]-32;
          }

          printf("%s",a);

          return 0;
}
