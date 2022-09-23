#include<stdio.h>
#include<stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}


int main(void){
    int t;

    scanf("%d", &t);

    while(t--){
        int n, x, flag=0;

        scanf("%d %d", &n, &x);

        int h[2*n+2], i,j;

        for(i=0;i<2*n;i++)scanf("%d", &h[i]);

        qsort(h, 2*n, sizeof(int), cmpfunc);

        for(i=0;i<n;i++){
            if(h[n+i]-h[i]<x){
                printf("NO\n");
                flag=1;
                break;
            }
        }

        if(flag==0)printf("YES\n");

    }
}
