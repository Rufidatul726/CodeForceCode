#include<stdio.h>

int main(void){
    int t,a,b;

    scanf("%d",&t);

    while(t--){
        scanf("%d%d",&a,&b);

        if(a==b)printf("%d\n",2*a);
        else if(a>b)printf("%d\n",2*a-1);
        else printf("%d\n",2*b-1);
    }

}
