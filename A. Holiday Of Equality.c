#include<stdio.h>

int main(void){
    int i, n;
    long long int sum=0, max=0, a[101];
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
        if(max<a[i])max=a[i];
    }

    for(i=0;i<n;i++){
        sum=sum+max-a[i];
    }

    printf("%lld",sum);

}
