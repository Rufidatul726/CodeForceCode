#include<stdio.h>

int main(void){
        int i,k,n,a[1001],t,j1=0,j2=0;

        scanf("%d",&t);

        while(t--){
                k=0;
                j1=0;
            scanf("%d",&n);

            for(i=0;i<n;i++){
                scanf("%d",&a[i]);
                if(a[i]%2!=i%2)k++;
                if(a[i]%2==0)j1++;

            }

            if(k%2!=0)printf("-1\n");
            else if(n%2==0 && j1!=n/2)printf("-1\n");
            else if(n%2!=0 && 2*j1!=n+1)printf("-1\n");
            else{
                printf("%d\n",k/2);
            }
        }
        return 0;
}
