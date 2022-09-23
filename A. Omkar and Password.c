#include<stdio.h>
#include<stdlib.h>

int sort(const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main(void){
    long int i,j,k=1,n,t;
    scanf("%ld",&n);

    while(n--){
        scanf("%ld",&t);
        long int a[t];
        k=0;
        for(i=0;i<t;i++){
            scanf("%ld",&a[i]);
        }
        qsort(a,t,sizeof(int),sort);

        if(a[0]==a[t-1]){
            printf("%ld\n",t);
        }
        else
            printf("1\n");
    }
}
