#include<stdio.h>

int main(void){
    long int n;
    int t;

    scanf("%d",&t);

    while(t--){
        scanf("%ld",&n);
        if(n%2==0){n=n/2-1;}
        else{n=n/2;}
        printf("%ld\n",n);
    }
}
