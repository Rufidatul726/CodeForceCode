#include<stdio.h>

int main(void){
        long long int n,m,k,i,t;

        scanf("%lld",&t);

        while(t--){
            scanf("%lld%lld",&n,&m);

            if(n==1)printf("0");
            else if(n==2)printf("%lld",m);
            else printf("%lld",2*m);

            printf("\n");
        }
}
