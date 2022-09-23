#include<stdio.h>

int main(void){
        int t;
        long int a,b,x,y;

        scanf("%d",&t);

        while(t--){
            scanf("%ld%ld",&a,&b);

            if(a==b){
                printf("0\n");
            }
            else if(a<b){
                if((b-a)%2!=0)printf("1\n");
                else printf("2\n");
            }
            else{
                if((b-a)%2==0)printf("1\n");
                else printf("2\n");
            }
        }
}
