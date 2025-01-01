#include<stdio.h>

int main(void){
    int t;

    scanf("%d", &t);

    while(t--){
        int n=0;
        int flag=0;
        int sum=0;
        int count=0;

        scanf("%d", &n);

        for(int i=1;i<=n;i++){
            printf("%d ", i);
        }

        printf("\n");
    }
}
