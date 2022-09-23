#include<stdio.h>
#include<stdlib.h>

int main(void){
     int i,j,a[6][6],n=0;

     for(i=0;i<5;i++){
          for(j=0;j<5;j++){
               scanf("%d",&a[i][j]);
          }
     }
     for(i=0;i<5;i++){
          for(j=0;j<5;j++){
               if(a[i][j]==1){
                    n=abs(i-2);
                    n=n+abs(j-2);
                    break;
               }
          }
     }
     printf("%d",n);

     return 0;
}
