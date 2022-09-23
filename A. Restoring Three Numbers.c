#include<stdio.h>

int main(void){
    long long int a,b,c,d;

    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);

    if(a>=b && a>=c && a>=d)printf("%lld %lld %lld",a-b,a-c,a-d);
    else if(b>=a && b>=c && b>=d)printf("%lld %lld %lld",b-a,b-c,b-d);
    else if(c>=b && c>=d && c>=d)printf("%lld %lld %lld",c-b,c-a,c-d);
    else if(d>=b && d>=c && d>=a)printf("%lld %lld %lld",d-b,d-c,d-a);

    return 0;

}
