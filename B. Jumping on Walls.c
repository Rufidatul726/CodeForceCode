#include<stdio.h>

int main(void){
    long int n,k,i;

    scanf("%ld%ld",&n,&k);
    char a[n+1],b[n+1];

    scanf("%s%s",&a,&b);

    for(i=0;i<n;i++){
        if(a[i]=='X' && b[i+k]=='X'){
            printf("NO");
            return 0;
        }
    }

    printf("YES");
}
