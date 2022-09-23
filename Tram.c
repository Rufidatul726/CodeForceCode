#include<stdio.h>
#include<string.h>

int main(void){
     int a[1000],b[1000],n,i,c[1000]={0};

     scanf("%d",&n);

     for(i=0;i<n;i++){
          scanf("%d",&a[i]);
          scanf("%d",&b[i]);
     }

     for(i=0;i<n;i++){
          c[i]=c[i-1]+b[i]-a[i];
     }

     for(i=1;i<n;i++){
          if(c[0]<c[i]){
               c[0]=c[i];
          }
     }

     printf("%d",c[0]);
}
