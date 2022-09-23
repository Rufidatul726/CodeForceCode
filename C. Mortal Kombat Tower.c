#include<stdio.h>

int main(void){
    long int t,i,j,k=0,n,a[200003]={0};

    scanf("%ld",&t);

    while(t--){
        scanf("%ld",&n);

        for(i=0;i<n;i++){
            scanf("%ld",&a[i]);
        }

        for(i=0;i<n;i++){
            if(a[i+1]==1 && a[i+2]==1){
                k++;
                i=i+2;
            }

        }
    }

}
