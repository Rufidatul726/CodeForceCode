#include<stdio.h>
#include<math.h>

int main(void){
    long int t,n,k;

    scanf("%ld",&t);

    while(t--){
        scanf("%ld",&n);

        k=sqrt(n);

        if(k<n/2)k=n/2;

        printf("%ld\n",k);
    }
}
