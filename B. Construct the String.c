#include<stdio.h>

int main(void){
    int a,b,n,t,i,j,k=97;

    scanf("%d",&t);

    while(t--){
        scanf("%d%d%d",&n,&a,&b);
        k=97;
        for(i=0;i<n;i++){
            if(i%b==0)k=97;
            printf("%c",k);
            k++;
        }
        printf("\n");
    }
}
