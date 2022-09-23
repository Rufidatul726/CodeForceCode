#include<stdio.h>
#include<math.h>

int main(void){
    long int n,k=0,i;

    scanf("%ld",&n);

    if(n==1)n++;

    for(i=1;i<=n/2;i++){
        if(n%i==0)k++;
    }

    printf("%ld",k);

    return 0;
}
