#include<stdio.h>

long long int lcd(long long int x, long long int y){
    long long int i, gcd,s,n1=x,n2=y;

    while(n1!=n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }

    s= (x*y) / n1;

    return s;
}

int main(){
    int b;
    long long int a,c,d,p;

    scanf("%lld%d",&a,&b);

    if(b==1){
        scanf("%lld",&c);
        printf("%lld",a/c);
        return 0;
    }

    scanf("%lld%lld",&c,&d);
    long long int lc=lcd(c,d);
    p=a/c+a/d-a/lc;

    printf("%lld",p );

    return 0;

}


