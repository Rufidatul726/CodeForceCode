#include<stdio.h>

int main(void){
    long int a[101],n,m,t,i,j,k,sum;

    scanf("%ld",&t);

    while(t--){
            sum=0;
        scanf("%ld%ld",&n,&m);

        for(i=0;i<n;i++){
            scanf("%ld",&a[i]);
            sum=sum+a[i];
        }

        if(sum==m){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}
