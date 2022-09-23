#include<stdio.h>

int main(void){
    long long int t,a,b,x,y,i,j,k;

    scanf("%lld",&t);

    while(t--){
        scanf("%lld%lld",&x,&y);
        scanf("%lld%lld",&a,&b);

        if(x>y){
            i=x;
            x=y;
            y=i;
        }
        k=(x+y)*a;
        y=y-x;
        j=x*b+a*y;
        if(k<j)j=k;

        printf("%lld\n",j);
    }
}
