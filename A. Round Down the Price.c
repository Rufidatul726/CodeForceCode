#include<stdio.h>
#include<math.h>

long

int main(void){
    int t;

    scanf("%d", &t);

    while(t--){
        long long int m=0,k, val=1000000000;

        scanf("%lld", &m);
        int i;

        for(i=0;i<10;i++){
            if(val<=m){
                printf("%d\n", m-val);
                break;
            }
            val=val/10;
        }
    }
}
