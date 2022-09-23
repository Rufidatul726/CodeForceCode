#include<stdio.h>
#include <stdlib.h>


int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}


int main(void){
    int n,s[101],t,i,j,k;

    scanf("%d",&t);

    while(t--){
        scanf("%d",&n);

        for(i=0;i<n;i++){
            scanf("%d",&s[i]);
        }

        qsort(s, n, sizeof(int), cmpfunc);

        if(n==1)printf("YES\n");

        for(i=1;i<n;i++){
            if(s[i]-s[i-1]>1){
                printf("NO\n");
                break;
            }
            else if(n-i==1 && s[i]-s[i-1]<=1)
            {
                printf("YES\n");
            }
        }
    }
}
