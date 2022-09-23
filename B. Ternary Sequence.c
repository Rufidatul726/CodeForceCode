#include<stdio.h>

int main(void){
        long int i,j,k,n,t,x[2],y[2],z[2];
        long long int c=0;

        scanf("%ld",&t);

        while(t--){
            scanf("%ld%ld%ld",&x[0],&y[0],&z[0]);
            scanf("%ld%ld%ld",&x[1],&y[1],&z[1]);
           if(z[0]>=y[1]){
                    c=2*y[1];
                    z[0]=z[0]-y[1];
                    if(z[0]+x[0]<z[1]){
                        c=c-(z[1]-z[0]-x[0]);
                    }
           }
           else{
                c=2*z[0];
                y[1]=y[1]-z[0];
                if(x[0]<z[1]){
                    c=c-(z[1]-x[0]);
                }
           }
           printf("%lld\n",c);
        }
}
