#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void){
    int n,t=0,i,j,m=0;
    char a[1001],b[1001];

    scanf("%d",&n);

    scanf("%s",a);
    scanf("%s",b);

    for(i=0;i<n;i++){
        j=abs(a[i]-b[i]);
        if(j>=5)j=10-j;
        m=m+j;
    }

    printf("%d",m);
}
