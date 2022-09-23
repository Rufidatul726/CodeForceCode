#include<stdio.h>

int main(void){
        int i,n;
        float p[200],sum=0;

        scanf("%d",&n);

        for(i=0;i<n;i++){
            scanf("%f",&p[i]);
            sum=sum+p[i];
        }

        printf("%f",sum/n);
}
