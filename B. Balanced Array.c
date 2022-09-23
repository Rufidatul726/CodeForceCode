#include<stdio.h>

int main(void){
    int long n, i, t, j, s;

    scanf("%ld",&t);

    while(t--){
        scanf("%ld",&n);
        s=0;
        j=1;
        if(n<4 || n%4!=0)printf("NO\n");

        else{
                printf("YES\n");
                for(i=2;i<=n;i=i+2){
                    printf("%ld ",i);
                    s=s+i;
                }
                for(i=1;j<n/2;i=i+2){
                    printf("%ld ",i);
                    s=s-i;
                    j++;
                }
                printf("%ld\n",s);
        }
    }

}
