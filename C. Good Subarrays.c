#include<stdio.h>

int main(void){
    int i,j,k,a[100001],n,t,c=0;
    long int s;

    scanf("%d",&t);

    for(i=0;i<t;i++){
        scanf("%d",&n);
        scanf("%d",&s);
        for(j=0;j<n;j++){
            a[n-j-1]=s%10;
            if(a[n-j-1]==n-j-1)q++;
        }
       if(n>1){
            for(j=0;j<n-1;j++){
                for(k=j+1;k<n;k++){
                    if(a[j]+a[k]==k-j+1)q++;
                    if(j>0 && (a[j]+a[k]+a[0]==k+1))q++;
                    else if(j>1 && (a[j]+a[k]+a[1]==k))q++;
                    else if(j>2 && (a[j]+a[k]+a[2]==k-1))q++;
                    else if(j>3 && (a[j]+a[k]+a[3]==k-2))q++;
                    else if(j>4 && (a[j]+a[k]+a[4]==k-3))q++;
                }
            }
       }
       if(n==6){
            s[0]+s[1]+s[2]+s[3]+s[4]+s[5]==
       }
    }
}
