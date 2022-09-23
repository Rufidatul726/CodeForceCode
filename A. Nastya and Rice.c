#include<stdio.h>

int main(void){
    int a,b,c,d,n,t,i;

    scanf("%d",&t);
    while(t--){
             scanf("%d%d%d%d%d",&n,&a,&b,&c,&d);

            int k=n*a;
            int k1=n*b;

            if(((k-k1)>(c+d)) || ((k+k1)<(c-d))){
                printf("No\n");
            }

            else{
                printf("Yes\n");
            }
    }

}
