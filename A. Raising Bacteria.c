#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){
    long long int x,i,j=0,s;

    scanf("%lld",&x);
    double dbl = (double)x;
    double k=0.0000;

    for(i=0;dbl>0;i++){
        k=log2(dbl);
        s=(int)k;
        k=(double)s;
        j=pow(2.0000,k);
        dbl=dbl-j;
    }

    printf("%lld",i);
}
