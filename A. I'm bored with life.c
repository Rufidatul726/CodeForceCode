#include<stdio.h>

long long int min(long long int num1,long long int num2)
{
    return (num1 > num2 ) ? num2 : num1;
}

int main(void){
    long long int a,b,c,s=1;
    int i;

    scanf("%lld%lld",&a,&b);

    c=min(a,b);

    for(i=1;i<=c;i++){
        s=s*i;
    }

    printf("%lld",s);
}
