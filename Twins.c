#include<stdio.h>
#include<string.h>

int main(void){
     int n,a[100],i,j,sum=0,t=0,count=0;

     scanf("%d",&n);

     for(i=0;i<n;i++){
          scanf("%d",&a[i]);
          sum=sum+a[i];
     }

     sum=sum/2;

     for(i=0;i<n;i++){
          for(j=i;j<n;j++){
               if(a[j]>a[i]){
                    t=a[i];
                    a[i]=a[j];
                    a[j]=t;
               }
          }
     }

     for(i=0;sum>=count;i++){
               count=count+a[i];
     }

     printf("%d",i);
}
