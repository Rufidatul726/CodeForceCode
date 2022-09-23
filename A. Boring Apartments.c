#include<stdio.h>

int main(void){
    int t,n,count,i,j,k;

    scanf("%d",&t);

    while(t--){
        scanf("%d",&n);

        count=(n%10-1)*10;

        for(i=1;i<5;i++){
            count=count+i;
            n=n/10;

            if(n==0){
                break;
            }
        }

        printf("%d\n",count);
    }
}
