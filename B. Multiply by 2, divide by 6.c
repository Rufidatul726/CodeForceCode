#include<stdio.h>

int main(void){
    int i,j,k=1,n,t;

    scanf("%d",&t);

    for(i=0;i<t;i++){
        scanf("%d",&n);
        k=0;
        for(;;){
            if(n==1){
                printf("%d\n",k);
                break;
            }
            else if(n%6==0){
                n=n/6;
                k++;
            }
            else{
                n=n*2;
                k++;
            }
            if(n<1){
                printf("-1\n");
                break;
            }
        }
    }

    return 0;
}
