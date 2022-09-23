#include<stdio.h>
#include<stdlib.h>

long int max(long int num1, long int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}

int main(void){
        int t;
        long int a,b,c,d,e;

        scanf("%d",&t);

        while(t--){
            scanf("%ld%ld%ld%ld",&a,&b,&c,&d);

            e=max(c,max(a,b));

            d=d-3*e+a+b+c;

            if(d%3==0 && d>=0){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
}
