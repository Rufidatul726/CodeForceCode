#include<stdio.h>

int main(void){
        long int n,k,j=0;

        scanf("%ld",&n);

        j=n/100;
        n=n%100;

        j=j+n/20;
        n=n%20;

        j=j+n/10;
        n=n%10;

        j=j+n/5;
        n=n%5;

        j=j+n;

        printf("%ld",j);
}
