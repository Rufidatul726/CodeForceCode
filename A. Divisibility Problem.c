#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int  main(void){
    long long int a,b;
    int n,k,t;

    scanf("%d",&t);

    for(n=0;n<t;n++){
         scanf("%lld%lld",&a,&b);
        if(a%b==0){
            printf("0\n");
        }
        else{
            k=b*(round(a/b)+1);
            printf("%d\n",k-a);
        }
    }
    return 0;
}
