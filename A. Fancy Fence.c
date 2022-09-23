#include<stdio.h>

int main(void){
    int t,a,n;

    scanf("%d",&t);

    while(t--){
        scanf("%d",&a);

        n=180-a;

        if(360%n==0)printf("YES\n");
        else printf("NO\n");
    }

    return 0;

}
