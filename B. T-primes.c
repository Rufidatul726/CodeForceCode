#include<stdio.h>
#include<math.h>

int main(void){
        long long int i,n,k,j,m,c;

        scanf("%lld",&n);
        long long int a[n+1];

        for(i=0;i<n;i++){
            scanf("%lld", &a[i]);
        }

        for(i=0;i<n;i++){
            if(a[i]==1){
                printf("NO\n");
                continue;
            }

            m=sqrt(a[i]);
            if(m*m==a[i])printf("YES\n");
            else printf("NO\n");
        }

        return 0;
}
