#include <stdio.h>

int main()
{
    long int i,j,k,n,t,x,y;

    scanf("%ld",&t);

    while(t--){
        y=1;
        scanf("%ld",&n);

        for(i=1;i<=n;i++){
                if(n%i!=0)continue;
                k=n/i;
            for(j=2;j<=n+1;j=j*2){
                if(i*(j-1)==n){
                    x=n/(j-1);
                    printf("%ld\n",x);
                    y=0;
                    break;
                }
                else if(k*(j-1)==n && j>2){
                    x=n/(j-1);
                    printf("%ld\n",x);
                    y=0;
                    break;
                }
            }
            if(y==0)break;
        }
    }

    return 0;
}

