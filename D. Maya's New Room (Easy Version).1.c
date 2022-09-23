#include<stdio.h>
long int lcd(long int x, long int y){
    int i, gcd,s;

    for (i = 1; i <= x && i <=y; ++i) {
        if (x % i == 0 && y % i == 0)
            gcd = i;
    }

    s= (x*y) / gcd;

    return s;
}

int main(){
    int b;
    long int a,c,d,p;

    scanf("%ld%d",&a,&b);

    if(b==1){
        scanf("%ld",&c);
        printf("%ld",a/c);
        return 0;
    }

    scanf("%ld%ld",&c,&d);
    int lc=lcd(c,d);
    p=a/c+a/d-a/lc;

    printf("%ld",p );

    return 0;

}


