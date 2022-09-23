#include<stdio.h>

int main(void){
    int a,b,i,j=0,r=0,s;

    scanf("%d%d",&a,&b);
    j=a;

    for(;;){
        j=j+a/b;
        r=a%b;
        a=r+a/b;
        if(r>b){
            a=r/b;
            r=r%b;
        }
        if(a<b){
            break;
        }

    }

    printf("%d",j);
}
