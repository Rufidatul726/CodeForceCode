#include<stdio.h>

int main(void){
    int n,m,p;

    scanf("%d%d%d",&n,&m,&p);

    if(n<=m && n<=p){
        printf("Yes");
    }
    else printf("No");

    return 0;
}
