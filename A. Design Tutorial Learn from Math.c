#include<stdio.h>

int main(void){
        long int n;

        scanf("%ld",&n);

        if(n%2==0){
            printf("8 %ld\n",n-8);
        }

        else{
            printf("9 %ld\n",n-9);
        }
}
