#include<stdio.h>

int main(void){
    int a[30010],n,t,b,i,j;

    scanf("%d%d",&n,&t);

    for(i=1;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=1;i<=t;i=i+a[i]){
        if(i+a[i]==t){
            printf("YES\n");
            return 0;
        }
    }

    printf("NO\n");

    return 0;
}
