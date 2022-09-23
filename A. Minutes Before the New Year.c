#include<stdio.h>

int main(void){
    int a,b,c,d,e;

    scanf("%d",&c);

    while(c--){
        scanf("%d%d",&a,&b);

        d=60-b;
        e=(23-a)*60;
        printf("%d\n",e+d);
    }
}
