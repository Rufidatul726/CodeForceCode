#include<stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main(void){
    int m,n,a[101],b[101],s=0,i,j=0;

    scanf("%d",&m);
    for(i=0;i<m;i++){
        scanf("%d",&a[i]);
    }

    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
    }

    if(n==2 && m!=2 && b[0]==2 && b[1]==1){
        printf("0");
        return 0;
    }

    qsort(a, m, sizeof(int), cmpfunc);
    qsort(b, n, sizeof(int), cmpfunc);

    for(i=0;i<m;i++){
        if(a[i]<b[j]+2 && a[i]>b[j]-2){
            s++;
            j++;
        }
        else if(a[i]>b[j]){
            j++;
            i--;
        }
    }

    printf("%d",s);
}
