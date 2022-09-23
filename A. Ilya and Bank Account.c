#include<stdio.h>

int main(void){
    long long int a,b,c;

    scanf("%lld",&a);

    if(a>0){
        printf("%lld\n",a);
        return 0;
    }

    b=a%10;
    a=a/10;
    c=a%10;
    a=a/10;

    if(b>=c){
        printf("%lld",a*10+b);
    }

    else{
        printf("%lld",a*10+c);
    }

    return 0;
}
