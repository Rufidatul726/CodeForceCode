#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}


int main(void){
    long int n,j=0,i;

    scanf("%ld",&n);

    long long int a[n],k=0,l=1;

    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }

    qsort(a, n, sizeof(long long int), cmpfunc);

    j=a[0]-1;
    k=sqrt(a[1]);

    for(i=1;i<n;i++){
        l=k*l;
        j=j+l;
    }

    printf("%ld %lld",j,l);

    return 0;
}
