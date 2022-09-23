#include<stdio.h>

int main(void){
    long int n,i,j=0,k=0,m;

    scanf("%ld",&n);

    char a[n+2];
    getchar();

    for(i=0;i<n;i++){
        scanf("%c",&a[i]);
        if(a[i]=='1')j++;
        else if(a[i]=='0')k++;
    }

    if(j==k)m=0;
    else if(j>k)m=j-k;
    else m=k-j;

    printf("%ld",m);
}
