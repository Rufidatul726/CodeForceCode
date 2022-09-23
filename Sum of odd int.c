#include<stdio.h>

int main(void){
          long long int n,s,k,t,i;

          scanf("%lld",&t);
          while(t--){
               scanf("%lld%lld",&n, &k);

                if((n%2==0 && k%2==0 && k*k<=n) || (n%2!=0 && k%2!=0 && k*k<=n)){
                    printf("YES\n");
                }
                else printf("NO\n");
         }
}
