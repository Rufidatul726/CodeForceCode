#include<stdio.h>

int main(void){
    long int c=0,n,i,j;

    scanf("%ld",&n);

    for(i=1;;i++){
        c=c+i*(i+1)/2;
        if(c==n)break;
        else if(c>n){
            i--;break;
        }
    }

    printf("%ld",i);
}
