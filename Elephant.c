#include<stdio.h>

int main(void){
     int i;
     long long int x;

     scanf("%lld",&x);

     i=x/5;

     if(x%5!=0){
          i++;
     }

     printf("%d",i);
}
