#include<stdio.h>

int main(void){
    int n,i,j,k=0;

    scanf("%d",&n);
    long int a[n],min,max,m1,m2;

    for(i=0;i<n;i++){
        scanf("%ld",&a[i]);
    }

    m1=a[0];
    m2=a[0];

    for(i=1;i<n;i++){
         if(a[i]<m1){
            m1=a[i];
            k++;
         }
    }

    for(i=1;i<n;i++){
        if(a[i]>m2){
            m2=a[i];
            k++;
        }
    }

    printf("%d",k);
}
