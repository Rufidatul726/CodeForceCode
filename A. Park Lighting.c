#include<stdio.h>

int main(void){
    long int t,m,n,multiply;

    scanf("%ld",&t);

    while(t--){
        scanf("%ld%ld",&n,&m);

        multiply=n*m;

        if(multiply%2==0){
            printf("%ld\n",multiply/2);
        }
        else{
            printf("%ld\n",(multiply/2)+1);
        }
    }
}
