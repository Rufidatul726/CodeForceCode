#include<stdio.h>
#include<string.h>

int main(void){
          int a,b,i;

          scanf("%d%d",&a,&b);

          for(i=0;a<=b;i++){
               a=3*a;
               b=2*b;
          }

          printf("%d",i);

          return 0;
}
