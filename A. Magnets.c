#include<stdio.h>

int main(void){
    long int i,j=1,k,n;
    int a[100000];

    scanf("%ld",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

        if(a[i-1]!=a[i] && i>0){
            j++;
        }
    }


    printf("%ld",j);
}
