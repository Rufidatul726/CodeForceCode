#include<stdio.h>

int main(void){
    long long int n,i,j=0;

    scanf("%lld",&n);

    if(n%2==0){
        j=n/2;
    }
    else{
        j=((n-1)/2)-n;
    }


    printf("%lld",j);

    return 0;
}
