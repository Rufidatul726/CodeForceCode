#include<stdio.h>
#include<string.h>

int main(void){
          long long int n;
          int k,w,i;

          scanf("%d%d%d",&k,&n,&w);

          i=(k*w*(w+1)/2)-n;

          if(i<0){
               i=0;
          }

          printf("%d",i);

          return 0;
}
