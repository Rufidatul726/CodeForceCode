#include<stdio.h>

int main(void){
    long int i,j,t,l,k,m,r;

    scanf("%ld",&t);

    while(t--){
        int n=0;
        scanf("%ld%ld",&l,&r);

        if(r>=l*2){
            printf("%ld %ld\n",l,l*2);
        }
        else{
            printf("-1 -1\n");
        }

    }
    return 0;
}
