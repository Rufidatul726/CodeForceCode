#include<stdio.h>
#include<stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main(void){
    int i,s,t,n,k,a[31]={0},b[31]={0},temp=0;

    scanf("%d",&t);

    while(t--){
        scanf("%d%d",&n,&k);
        s=0;

        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }

        qsort(a, n, sizeof(int), cmpfunc);

        for(i=0;i<n;i++){
            scanf("%d",&b[i]);
        }

        qsort(b, n, sizeof(int), cmpfunc);

       for(i=0;i<k;i++){
           if(a[i]<b[n-i-1]){
                a[i]=b[n-i-1];
            }
            else break;
       }

       for(i=0;i<n;i++){
            s=s+a[i];
       }

       printf("%d\n",s);

    }
}
