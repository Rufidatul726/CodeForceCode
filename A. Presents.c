#include<stdio.h>

int main(void){
        int i,j=1,k,t,m[200],n[200];

        scanf("%d",&t);

        for(i=1;i<=t;i++){
            scanf("%d",&m[i]);
            n[m[i]]=i;
        }
        for(i=1;i<=t;i++){
            printf("%d ",n[i]);
        }
}
