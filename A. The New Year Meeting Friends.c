#include<stdio.h>
#include<stdlib.h>

int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}

int min(int num1, int num2)
{
    return (num1 > num2 ) ? num2 : num1;
}

int main(void){
        int a,b,c,i,j;

        scanf("%d%d%d",&a,&b,&c);

       i=max(a,max(b,c));
       j=min(a,min(b,c));

       printf("%d",i-j);

        return 0;
}
