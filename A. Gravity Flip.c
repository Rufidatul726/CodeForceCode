#include<stdio.h>
#include<stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main(void){
    int s[101],n,i;

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&s[i]);
    }

    qsort(s, n, sizeof(int), cmpfunc);

    for(i=0;i<n;i++){
        printf("%d ",s[i]);
    }
}
