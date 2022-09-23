#include<stdio.h>

int main(void){
    long long int a,b,c,d,t,k,i;

    scanf("%lld",&t);

    while(t--){
    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);

    printf("%lld %lld %lld\n",b,c,c);

    }
}
/*if(a+b<=d){
        for(i=c;i>b;i--){
            if(a+i>d)break;
        }
        if(a+b<=d && a!=b){
            a=b;
            i=c;
        }
   }*/
