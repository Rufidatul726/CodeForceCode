#include<stdio.h>

int main(void){
    int t;
    long long int x;

    scanf("%d",&t);

    while(t--){
        scanf("%lld",&x);

        printf("1 %lld\n",x-1);
    }
}
