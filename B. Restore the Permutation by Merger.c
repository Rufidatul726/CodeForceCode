#include<stdio.h>

int main(void){
    int i,j,k,a[101],n,b,test;

    scanf("%d",&test);

    while(test--){
        scanf("%d",&n);
        for(i=0;i<2*n;i++){
            scanf("%d",&a[i]);
            for(j=0;j<i;j++){
                if(a[j]==a[i])a[i]=0;
            }
        }

        for(i=0;i<2*n;i++){
            if(a[i]!=0)printf("%d ",a[i]);
        }
        printf("\n");
    }
}
