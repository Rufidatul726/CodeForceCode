#include<stdio.h>

int main(void){
        int i,j,k,n;

        scanf("%d%d",&n,&k);

        k=(240-k)/5;
        if(k==0){
            printf("0\n");
            return 0;
        }

        for(i=n;i>0;i--){
            if(i*(i+1)<=2*k){
                    printf("%d\n",i);
                    return 0;
            }
        }
}
