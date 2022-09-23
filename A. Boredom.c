#include<stdio.h>

int main(void){
    long int n,a[100003],s=0,i,j;

    scanf("%ld",&n);

    for(i=0;i<n;i++){
        scanf("%ld",&a[i]);

        if(n==1|| (n==2 && a[0]>a[i])){
            printf("%ld\n",a[0]);
            return 0;
        }
        if(n==2 && a[0]<a[i]){
            printf("%ld\n",a[1]);
            return 0;
        }
    }

    for(i=1;i<n;i++){
        if(a[i]>a[i+1] && a[i]>a[i-1] && a[i-1]+a[i+1]<=a[i]){
            s=s+a[i];
            a[i]=0;
            a[i-1]=0;
            a[i+1]=0;
        }
    }


}
