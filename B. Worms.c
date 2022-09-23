#include<stdio.h>

int main(void){
    long long int n,m,i,j=0,k,l;

    scanf("%lld",&n);
    long long int a[n+1],s[100002]={0};

    for(i=1;i<=n;i++){
        scanf("%lld",&a[i]);
        s[i]=s[i-1]+a[i];
    }

    scanf("%lld",&m);
    long long int q[m+1];

    for(i=1;i<=m;i++){
        scanf("%lld",&q[i]);
        if(q[i]<=s[0]){
            printf("0\n");
            continue;
        }
        for()
    }


    for(i=1;i<=m;i++){
                if(q[i]>s[n/2]){
                    if(n%2!=0)k--;
                    k=n/2;
                    l=n;
                }
                else if(q[i]<s[n/2]){
                    if(n%2!=0)l++;
                    k=0;
                    l=n/2;
                }
                else{
                    printf("%lld\n",n/2);
                    continue;
                }
       for(j=k;j<=l;j++){
            if(s[j]==q[i]){
                printf("%lld\n",j);
                break;
            }
            else if(s[j]>q[i]){
                printf("%lld\n",j);
                break;
            }
       }
    }

}
