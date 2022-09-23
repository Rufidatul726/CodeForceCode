#include<stdio.h>

int main(void){
    long long int t,n,i,k,d=0;

    scanf("%lld",&t);

    while(t--){
            scanf("%lld%lld",&n,&k);
        long long int a[n];
        for(i=0;i<n;i++){
            scanf("%lld",&a[i]);
            if(i==0) d=a[0];
            else if(i>0 && a[i]>=d)d=a[i];
        }
        if(k%2==0){
            for(i=0;i<n;i++){
                a[i]=d-a[i];
            }
            d=a[0];
            for(i=1;i<n;i++){
                if(a[i]>d)d=a[i];
            }
        }

        for(i=0;i<n;i++){
            printf("%lld ",d-a[i]);
        }
        printf("\n");
    }
}
