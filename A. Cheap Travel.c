#include<stdio.h>

int main(void){
    int n,m,a,b,t,s,k;

    scanf("%d%d%d%d",&n,&m,&a,&b);

    s=n*a;
    k=n/m*b;
    n=n%m;

    if(n!=0 && n*a>b){
        t=k+b;
    }
    else
        t=n*a+k;

    if(s>=t){
        printf("%d",t);
    }

    else{
        printf("%d",s);
    }

    return 0;
}
