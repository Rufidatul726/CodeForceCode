#include<stdio.h>

int main(void){
    int n,a,b,i,j,c=0,m=0;

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d%d",&a,&b);
        if(a>b)m++;
        else if(a<b)c++;
    }

    if(m>c)printf("Mishka");
    else if(m<c)printf("Chris");
    else if(m==c)printf("Friendship is magic!^^");

    return 0;
}
