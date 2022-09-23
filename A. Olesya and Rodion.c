#include<stdio.h>

int main(void){
        int n,k,i;

        scanf("%d%d",&n,&k);

        char a[n+1];

        if(k==10 && n==1){
            printf("-1");
            return 0;
        }

        if(k<10){
                printf("%d",k);
                for(i=1;i<n;i++){
                    printf("0");
                }
                return 0;
        }

        if(k==10){
            printf("1");
            for(i=1;i<n;i++){
                printf("0");
            }
            return 0;
        }

}
