#include<stdio.h>
#include<stdlib.h>

int main(void){
    int n,m,i,j,k=0;

    scanf("%d%d",&n,&m);

    if(m<=n){
        printf("%d\n",n-m);
        return 0;
    }

    if(abs(m-n)==1){

    }

    for(;;){
        if(m%2==0){
            m/=2;
            k++;
        }
        else {
            m++;
            k++;
        }

        if(n==m){
            printf("%d\n",k);
            return 0;
        }
    }

}

