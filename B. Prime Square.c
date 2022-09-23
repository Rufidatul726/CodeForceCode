#include<stdio.h>

int main(void){
    int i,j,k,t,n,m;

    scanf("%d",&t);

    while(t--){
            j=0;
        scanf("%d",&n);

        for(i=2;i<n;i++){
            if(n%i==0){
                j=3;
                break;
            }
        }

        if(j==0){
            for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                    printf("1 ");
                }
                printf("\n");
            }
        }

        else{
            for(i=2;;i++){
                for(j=2;j<n-1+i*2;j++){
                    if((n-1+2*i))
                }
            }
        }
    }
}
