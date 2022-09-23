#include<stdio.h>
#include<stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main(void){
        int n,i,j,k;

        long int l,a[1001];
        double d;

        scanf("%d%ld",&n,&l);

        for(i=0;i<n;i++){
            scanf("%ld",&a[i]);
        }

        qsort(a, n, sizeof(int), cmpfunc);

        d=a[1]-a[0];

        if(a[0]<=d && a[0]!=0){
            printf("%.9f",(double)a[0]);
            return 0;
        }

        for(i=2;i<n;i++){
                if(d<a[i]-a[i-1])d=a[i]-a[i-1];
        }
        printf("%.9f",d/2);
}

