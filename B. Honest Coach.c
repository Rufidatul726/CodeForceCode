#include<stdio.h>
#include<stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main(void){
    int t,n,s[52],i,j;

    scanf("%d",&t);

    while(t--){
        scanf("%d",&n);

        for(i=0;i<n;i++){
            scanf("%d",&s[i]);
        }

        qsort(s, n, sizeof(int), cmpfunc);

        j=s[1]-s[0];

        for(i=1;i<n;i++){
            if(s[i]-s[i-1]<j)j=s[i]-s[i-1];
        }

        printf("%d\n",j);
    }

}
