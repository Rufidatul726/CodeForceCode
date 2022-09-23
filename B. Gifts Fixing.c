#include<stdio.h>

int min(int num1, int num2)
{
    return (num1 > num2 ) ? num2 : num1;
}


int main(void){
    int n,t;

    scanf("%d",&t);

    while(t--){
        scanf("%d",&n);

        long long int a[n+1],b[n+1],i,j,k=0,min_a,mi,m,min_b;

        for(i=0;i<n;i++){
            scanf("%lld",&a[i]);
            if(i==0)min_a=a[0];
            else if(min_a>a[i])min_a=a[i];
        }

        for(i=0;i<n;i++){
            scanf("%lld",&b[i]);
            if(i==0)min_b=b[0];
            else if(min_b>b[i])min_b=b[i];
        }

        for(i=0;i<n;i++){
            if(a[i]>min_a && b[i]>min_b){
                mi=min(a[i]-min_a,b[i]-min_b);
                k=k+mi;
                a[i]=a[i]-mi;
                b[i]=b[i]-mi;
            }
             k=k+(a[i]-min_a)+(b[i]-min_b);
        }

        printf("%lld\n",k);
    }
}
