#include<stdio.h>

int main(void){
    long int n,m,a[100002],i;

    long long int s=1;

    scanf("%ld%ld",&n,&m);

    for(i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    s=a[0]-s;

    for(i=1;i<m;i++){
        if(a[i-1]==a[i])s=s+0;
        else if(a[i-1]<a[i])s=s+a[i]-a[i-1];
        else{
            s=s+n-a[i-1]+a[i];
        }
    }

    printf("%lld\n",s);

    return 0;
}
