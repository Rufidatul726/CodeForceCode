#include<stdio.h>
#include<stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main(void){
    int i,n,m,s[100],a[100];

    scanf("%d%d",&n,&m);

    for(i=0;i<m;i++){
        scanf("%d",&s[i]);
    }

    qsort(s, m, sizeof(int), cmpfunc);

    for(i=0;i<=m-n;i++){
        a[i]=s[i+n-1]-s[i];

        if(a[0]>a[i]){
            a[0]=a[i];
        }
    }

    printf("%d",a[0]);

    return 0;
}
