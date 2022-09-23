#include<stdio.h>

int main(void){
        int n,i=0,j,k=0,a[202],p,q;

        scanf("%d",&n);

        scanf("%d",&p);
        for(i=0;i<p;i++){
            scanf("%d",&a[i]);
        }
        scanf("%d",&q);
        for(i=i;i<q+p;i++){
            scanf("%d",&a[i]);
        }

        for(i=1;i<=n;i++){
            for(j=0;j<q+p;j++){
                    if(a[j]==i){
                        k++;
                        break;
                    }
            }
        }

        if(n==k){
            printf("I become the guy.");
        }
        else{
            printf("Oh, my keyboard!");
        }

        return 0;
}
