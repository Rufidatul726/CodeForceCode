#include<stdio.h>

int main(void){
    int a,b,t,s=0,i;

    scanf("%d",&t);

    for(i=0;i<t;i++){
        scanf("%d%d",&a,&b);
        if(a<b){
            s=a;
            a=b;
            b=s;
        }

        if(a>=2*b)printf("%d\n",a*a);
        else printf("%d\n",4*b*b);
    }

    return 0;
}
