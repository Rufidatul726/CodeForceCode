#include<stdio.h>

int main(void){
    long long int n,i,k=0;

    scanf("%lld",&n);
    char a[n];

    while(n--){
        scanf("%s",a);
        if(a[0]=='T')k=k+4;
        else if(a[0]=='C')k=k+6;
        else if(a[0]=='O')k=k+8;
        else if(a[0]=='D')k=k+12;
        else if(a[0]=='I')k=k+20;
    }

    printf("%lld",k);
}
