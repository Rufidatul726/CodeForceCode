#include<stdio.h>

int main(void){
    int t;

    scanf("%d", &t);

    while(t--){
        long long int n;
        long long int output;

        scanf("%lld", &n);
        if(n==1)output=2;
        else if(n%3==0)output=n/3;
        //else if(n%3==2)output=n/3+1;
        else output=n/3+1;

        printf("%lld\n",output);

    }
}
