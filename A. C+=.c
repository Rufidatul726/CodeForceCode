#include<stdio.h>

int main(void){
    long int a,b,n,i,j,k=0,t;

    scanf("%ld",&t);

    while(t--){
    scanf("%ld%ld%ld",&a,&b,&n);

    for(i=0;a+b<=n;){
        if(a>=b){
            b=a+b;
            i++;
        }
        else{
            a=a+b;
            i++;
        }
    }

    printf("%ld\n",i+1);

    }

    return 0;
}
