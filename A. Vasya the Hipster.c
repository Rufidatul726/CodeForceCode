#include<stdio.h>

int main(void){
    int a,b,c,d;

    scanf("%d%d",&a,&b);

    if(a>=b){
        c=a-b;
        printf("%d %d\n",b,c/2);
    }

    else{
        c=b-a;
        printf("%d %d\n",a,c/2);
    }


}
