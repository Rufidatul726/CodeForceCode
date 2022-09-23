#include<stdio.h>

int main(void){
          int n,i,j,a[1000][3],count,c=0;

          scanf("%d",&n);

          for(i=0;i<n;i++){
                    count=0;
               for(j=0;j<3;j++){
                    scanf("%d",&a[i][j]);
                    if(a[i][j]==1){
                         count++;
                    }
               }
               if(count>1){
                    c++;
               }
          }
          printf("%d",c);

          return 0;
}
