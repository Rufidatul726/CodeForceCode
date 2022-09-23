#include<stdio.h>
#include<string.h>

int main(void){
          int n,i,X=0;
          char a[4];

          scanf("%d",&n);

          for(i=0;i<n;i++){
                    scanf("%s",a);

               if(a[1]=='-'){
                    X--;
               }
               else if(a[1]=='+'){
                    X++;
               }
          }
          printf("%d",X);

          return 0;
}
