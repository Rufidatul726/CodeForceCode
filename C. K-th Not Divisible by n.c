#include<stdio.h>

int main(void){
    int t;
    long long int n,k,a,i;

    scanf("%d",&t);

    while(t--){
        scanf("%lld%lld",&n,&k);
        if(n==2){
            printf("%lld\n",2*k-1);
            continue;
        }

        int s,p;

        for(i=s+1;i<=k;i++){
            if(n*i<=k)k++;
            else break;
        }

        printf("%lld\n",k);
    }
}
