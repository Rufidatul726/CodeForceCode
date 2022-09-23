#include<stdio.h>

int main(void){
    int t;
    long int n,i,j;

    scanf("%d",&t);

    while(t--){
        scanf("%ld",&n);
        j=0;
        for(j=0;n>3;j++){
            if(n%2!=0)n--;
            else{
                i=n/2;
                n=n/i;
            }
        }

        if(n==3)j=j+2;
        if(n==2)j++;

        printf("%d\n",j);
    }
}
