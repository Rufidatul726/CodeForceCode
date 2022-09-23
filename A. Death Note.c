#include<stdio.h>

int main(void){
    long long int i,j,k=0,a[200003],n,m,s=0,f=0;

    scanf("%lld%lld",&n,&m);

    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
        s=s+a[i];
        k=s/m-f;
        f=k+f;
        printf("%lld ",k);
    }

}
