#include<stdio.h>
#include<string.h>

int main(void){
     int i,n,j=0,k=0, a[14]={4,7,44,47,74,77,444,447,474,477,744,747,774.777};

     scanf("%d",&n);

     for(i=0;i<13;i++){
          if(n==a[i])
               j++;
          else if(n%a[i]==0)
               k++;
     }

     if(j==0  &&  k==0){
          printf("NO");
     }
     else
          printf("YES");

     return 0;
}
