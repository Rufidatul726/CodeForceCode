#include<stdio.h>

int main(void){
    int a,n,i,t;

    scanf("%d",&t);

    while(t--){
        scanf("%d",&n);
        if(n==2){
            printf("2 1\n");
            continue;
        }
        for(i=n;i>0;i--){
            if(i==n/2 || i==(n/2)+1)continue;
            printf("%d ",i);
        }
        printf("%d %d\n",(n/2),(n/2)+1);
    }
}
