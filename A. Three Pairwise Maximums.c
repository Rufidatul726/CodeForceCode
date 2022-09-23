#include<stdio.h>
#include<stdlib.h>

long int max(long int num1, long int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}

long int min(long int num1, long int num2)
{
    return (num1 > num2 ) ? num2 : num1;
}

int main(void){
        int t,n;

        scanf("%d",&t);

        while(t--){
        long int a[3],d,e;

        scanf("%ld%ld%ld",&a[0],&a[1],&a[2]);

        d=max(a[2],max(a[0],a[1]));
        e=min(a[2],min(a[0],a[1]));

        if((a[0]==d && a[1]==d) ||  (a[0]==d && a[2]==d) ||  (a[2]==d && a[1]==d)){
                printf("YES\n");

                if(a[0]==a[1] && a[1]==a[2]){
                        printf("%ld %ld %ld\n",a[0],a[1],a[2]);
                }

                else if(a[0]==d){
                        a[0]=e;
                        printf("%ld %ld %ld\n",a[0],a[1],a[2]);
                }
                else if(a[1]==d){
                        a[1]=e;
                        printf("%ld %ld %ld\n",a[0],a[1],a[2]);
                }
                else if(a[2]==d){
                        a[2]=e;
                        printf("%ld %ld %ld\n",a[0],a[1],a[2]);
                }
        }

        else printf("NO\n");

        }

        return 0;
}
