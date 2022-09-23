#include<stdio.h>
#include<stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}


int main(void){
    long int n,t,i,s;
    long int a[100003];
    scanf("%d",&t);

    while(t--){
         s=0;
         scanf("%ld",&n);

         for(i=0;i<n;i++){
                scanf("%ld",&a[i]);
         }

         qsort(a, n, sizeof(long int), cmpfunc);

         for(i=1;i<n;i++){
            if(a[i-1]!=a[i])s++;
         }

         printf("%ld\n",s+1);
    }
}
