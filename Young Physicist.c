#include<stdio.h>

int main(void){
     int i,n,sum1=0,sum2=0,sum3=0;
     int a[100],b[100],c[100];

     scanf("%d",&n);

     for(i=0;i<n;i++){
          scanf("%d",&a[i]);
          scanf("%d",&b[i]);
          scanf("%d",&c[i]);
     }

     for(i=0;i<n;i++){
          sum1=sum1+a[i];
          sum2=sum2+b[i];
          sum3=sum3+c[i];
     }

     if(sum1==0 && sum2==0 && sum3==0){
          printf("YES");
     }
     else
          printf("NO");

     return 0;
}
