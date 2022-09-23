#include<stdio.h>

int min(int num1, int num2)
{
    return (num1 > num2 ) ? num2 : num1;
}

int max(int num1, int num2)
{
    return (num1 < num2 ) ? num2 : num1;
}

int gcd(int p,int q){
    while(p--){
        if(q%(p+1)==0)return p+1;
    }
}

int main(void){
    int a,b,n,x,j,y,i;

    scanf("%d%d%d",&a,&b,&n);

    for(i=0;x!=0 && y!=0;i++){
        //gcd of simon
        x=min(a,n);
        y=max(a,n);
        x=gcd(x,y);
        n=n-x;
        if(n==0){
            printf("%d",n);
            return 0;
        }
        //gcd of antisimon
        x=min(b,n);
        y=max(b,n);
        x=gcd(x,y);
        n=n-x;
        if(n==0){
            printf("%d",n+1);
            return 0;
        }
    }
}
