#include<stdio.h>
#include<string.h>

int main(void){
    long long int i,n,j=0;

    scanf("%lld",&n);

    for(i=0;;i++){
            if(n%10==7 || n%10==4){
                j++;
            }
            n=n/10;
            if(n==0){
                    break;}
    }

    if(j==4   || j==7){
        printf("YES");
    }
    else
        printf("NO");

    return 0;
}
