#include<stdio.h>

int main(void){
        long long int i,s,k,n;

        scanf("%lld%lld",&n,&k);

        if(n%2==0){s=n/2;}
        else{s=(n/2)+1;}

        if(s>=k){
            i=2*k-1;
        }
        else{
            i=2*(k-s);
        }
        printf("%lld",i);
}
