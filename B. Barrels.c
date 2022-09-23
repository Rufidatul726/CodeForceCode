#include<stdio.h>
#include<stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}


int main(void){
    long int n,k,t,i,j,k,count;
    long long int a[200003];

    scanf("%ld",t);

    while(t--){
        scanf("%ld%ld",&n,&k);

        for(i=0;i<n;i++){
            scanf("%lld",a[i]);
        }


    }
}
