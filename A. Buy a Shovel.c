#include<stdio.h>

int main(void){
        int k,n,i,r;

        scanf("%d%d",&n,&r);

        for(i=1;;i++){
            if(i*n%10==0 || ((i*n)-r)%10==0){
                printf("%d",i);
                break;
            }
        }
}
