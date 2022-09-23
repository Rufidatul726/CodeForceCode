#include<stdio.h>
#include<math.h>

int main(void){
    int n,t,sum=0,i;

    scanf("%d",&t);

    while(t--){
        scanf("%d",&n);
        sum=pow(2.000,n);


            for(i=1;i<n/2;i++){
                sum=sum+pow(2.000,i);
            }

            for(i=n/2;i<n;i++){
                sum=sum-pow(2.000,i);
            }
            printf("%d\n",sum);

    }
}
