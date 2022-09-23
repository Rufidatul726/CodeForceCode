#include<stdio.h>

int main(void){
    int a,b,c,i;
    int p[1001];
    int sum=0;

    scanf("%d%d%d",&c,&b,&a);

    for(i=0;i<c;i++){
        scanf("%d",&p[i]);
        if(p[i]<=a+b)sum++;
    }

    printf("%d",sum);
}
