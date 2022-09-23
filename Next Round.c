#include<stdio.h>

int main(void){
     int i,j,n,k,p,a[101],t=0;

     scanf("%d%d",&n,&k);

     for(i=0;i<n;i++){
          scanf("%d",&a[i]);
     }

     for(i=0;i<n;i++){
          for(j=0;j<n;j++){
               if(a[i]>a[j]){
                    t=a[i];
                    a[i]=a[j];
                    a[j]=t;
               }
          }
     }

     for(i=n-1;i>=0;i--){
          if(a[i]==0)
               n--;
     }

     for(i=k-1;i<n;i++){
          if(a[i]==a[i+1]){
               k++;
          }
          else
               break;
     }

     if(n<=k){
          k=n;
     }

     printf("%d",k);
}
