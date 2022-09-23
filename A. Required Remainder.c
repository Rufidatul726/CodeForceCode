#include<stdio.h>

int main(void){
    long long int n,x,y,k;
    int i,t;

    scanf("%d",&t);

    for(i=0;i<t;i++){
        scanf("%lld%lld%lld",&x,&y,&n);

        if(n%x==y){printf("%lld\n",n);}
        else{
            k=(n-y)/x;
            n=k*x+y;
            printf("%lld\n",n);
        }
    }
}
/*for(n=n;n>=0;n--){
            if(n%x==y){
                break;
            }
        }
        printf("%lld\n",n);*/
