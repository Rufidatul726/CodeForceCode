#include<stdio.h>

int main(void){
    long int n,i,j=1,k=0,s[1000]={0},t;
    long long int a[100000];

    scanf("%ld",&n);

    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
        if(i>0 && a[i-1]<=a[i]){
            s[j]++;
            k=1;
        }
        else if(k!=0)j++;
    }

    for(i=1;i<j;i++){
        for(k=i+1;k<=j;k++){
            if(s[i]<=s[k]){
                t=s[i];
                s[i]=s[k];
                s[k]=t;
            }
        }
    }

printf("%d\t",s[1]+1);
}
