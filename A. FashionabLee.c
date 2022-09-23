#include<stdio.h>

int main(void){
    int a,b,i;

    long long int n;

    scanf("%d",&a);

    while(a--){
        scanf("%lld",&n);

        if(n%4==0){
            printf("YES\n");
        }
        else
            printf("NO\n");
    }

    return 0;
}
