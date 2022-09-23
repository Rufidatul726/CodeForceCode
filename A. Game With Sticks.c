#include<stdio.h>

int min(int num1, int num2)
{
    return (num1 > num2 ) ? num2 : num1;
}

int main(void){
    int n,m,k;

    scanf("%d%d",&n,&m);

    k=min(m,n);

    if(k%2==0){printf("Malvika");}
    else{printf("Akshat");}

    return 0;
}
