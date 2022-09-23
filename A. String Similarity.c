#include<stdio.h>
#include<string.h>

int main(void){
    int i,j,k1=0,k2,n,t;
    char b='0',c='1',a[200];

    scanf("%d",&t);

    while(t--){
        scanf("%d",&n);
        k1=0;
        k2=0;
        scanf("%s",a);
        for(i=0;i<2*n-1;i++){
            if(a[i]=='1')k1++;
            else k2++;
        }
        if(k1>k2){
            for(i=0;i<n;i++){
                printf("%c",c);
            }
        }
        if(k1<k2){
            for(i=0;i<n;i++){
                printf("%c",b);
            }
        }
        printf("\n");
    }
}
