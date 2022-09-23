#include<stdio.h>

int main(void){
    int a[2002],t,n,i,j,k1=0,k2=0;

    scanf("%d",&t);

    while(t--){
        scanf("%d",&n);
        k1=0;

        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(a[i]%2!=0)k1++;
        }

        if(k1==0 || (k1==n && n%2==0)){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
}
