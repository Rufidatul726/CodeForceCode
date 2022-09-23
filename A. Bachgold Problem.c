#include<stdio.h>

int main(void){
        long int n,i,j;

        scanf("%ld",&n);

        if(n%2==0){
            j=n/2;
            printf("%ld\n",j);
            for(i=0;i<j;i++){
                printf("2 ");
            }
        printf("\n");
        }

        else{
            j=(n/2)-1;
            printf("%ld\n",j+1);
            for(i=0;i<j;i++){
                printf("2 ");
            }
            printf("3\n");
        }

        return 0;
}
