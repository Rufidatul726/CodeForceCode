#include<stdio.h>
#include<math.h>

int main(void){
    long int a,b,i,j,k;
    int t;

    scanf("%d",&t);

    while(t--){
        scanf("%ld%ld",&a,&b);

       if(a>=b && (a-b)%10==0){
            i=(a-b)/10;
            printf("%ld\n",i);
       }
       else if(a>=b && (a-b)%10!=0){
            i=(a-b)/10;
            printf("%ld\n",i+1);
       }
       else if(a<=b && (b-a)%10==0){
            i=(b-a)/10;
            printf("%ld\n",i);
       }
       else if(a<=b && (b-a)%10!=0){
            i=(b-a)/10;
            printf("%ld\n",i+1);
       }
    }
}
