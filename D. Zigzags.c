#include<stdio.h>
#include<stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main(void){
        int i,j,k,l,n,t,p=0,q,r,a[3003],s[3003];

        scanf("%d",&t);

        while(t--){
            scanf("%d",&n);
            p=0;
            for(i=0;i<n;i++){
                scanf("%d",&a[i]);
                s[i]=a[i];
            }

            qsort(s, n, sizeof(int), cmpfunc);

            for(i=0;i<n-1;i++){
                if(s[i]==s[i+1]){
                    p++;
                    //i++;
                }
            }
            printf("%d\n",p);
        }
}
