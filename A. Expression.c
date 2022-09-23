#include<stdio.h>

int main(void){
    int i=0,a,b,c,k,j,m,n;

    scanf("%d%d%d",&a,&b,&c);

    i=(a+b)*c;
    m=a*(b+c);
    j=a*b*c;
    k=a+b+c;

    if(i>=j && i>=k && i>=m){printf("%d",i);}

    else if(j>=i && j>=k && j>=m){printf("%d",j);}

    else if(k>=i && k>=j && k>=m){printf("%d",k);}

    else if(m>=i && m>=k && m>=j){printf("%d",m);}
    return 0;
}
