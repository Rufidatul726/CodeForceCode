#include<stdio.h>

int min(int num1, int num2)
{
    return (num1 > num2 ) ? num2 : num1;
}

int main(void){
    int n, k, l, c, d, p, nl, np,t1,t2,t3,minimum;

    scanf("%d%d%d%d%d%d%d%d",&n,&k,&l,&c,&d,&p,&nl,&np);

    t1=k*l/nl;
    t2=c*d;
    t3=p/np;

    minimum = min(t1,min(t2,t3));

    printf("%d",minimum/n);

}
