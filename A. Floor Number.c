#include<stdio.h>


int main(void){
    int t,n,x,a,b,c;

    scanf("%d",&t);

    while(t--){
        scanf("%d%d",&n,&x);
        b=0;

        if(n<3){
            printf("1\n");
            continue;
        }

        n=n-2;
        a=n/x;

        if(n%x!=0)b=1;

        c=a+b+1;

        printf("%d\n",c);
    }
}
