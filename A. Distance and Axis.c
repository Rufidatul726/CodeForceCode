#include<stdio.h>
#include<stdlib.h>

int main(void){
    long int i,j,k,n,t,x,y;

    scanf("%ld",&t);

    while(t--){
        scanf("%ld%ld",&n,&k);

        if(k>=n){
            printf("%ld\n",k-n);
        }
        else{
                if((n%2==0 && k%2==0) || (n%2!=0 && k%2!=0))printf("0\n");
                else printf("1\n");
        }

    }
}
