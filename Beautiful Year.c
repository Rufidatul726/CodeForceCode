#include<stdio.h>

int  main(void){
    int i,j,n,k,p,x;

    scanf("%d",&n);
    n++;

    for(x=0;;x++){
             i=n%10;
             j=(n/10)%10;
             k=(n/100)%10;
             p=(n/1000)%10;
        if(i==j || j==k || k==p || i==k || i==p || j==p){
            n++;
        }
        else
            break;
    }

    printf("%d",n);
}
