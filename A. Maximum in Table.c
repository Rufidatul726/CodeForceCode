#include<stdio.h>

int main(void){
    int a[11]={1};
    int i,j=1,k,n,t;

    scanf("%d",&n);

    while(j<=n){
    for(i=1;i<n;i++){
        a[i]=a[i-1]+a[i];
    }
    j++;
    }

    printf("%d",a[n-1]);
}
