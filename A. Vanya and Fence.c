#include<stdio.h>

int main(void){
    int n,h,a[1002],j=0;

    scanf("%d%d",&n,&h);

    while(n--){
        scanf("%d",&a[n]);
        if(a[n]<=h)j++;
        else j=j+2;
    }

    printf("%d",j);
}
