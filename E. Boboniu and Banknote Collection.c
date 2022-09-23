#include<stdio.h>

int main(void){
    long int i,j=0,n,a[100000],k[100000]={0};

    scanf("%ld",&n);

    for(i=0;i<n;i++){
      scanf("%ld",&a[i]);
      if(a[i-1]==a[i]){
            k[i]=k[i-1]+1;
      }
      else{
            if(k[i-1]>k[i])k[i]=k[i-1];
      }
    }
    for(i=0;i<n;i++){
        printf("%ld ",k[i]);
    }
}
