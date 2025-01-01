#include<stdio.h>
#include<math.h>

int largest_power(int n, int k) {
    int power = 1;
    while (power * k <= n) {
        power *= k;
    }
    return power;
}

int main(void){
    int t;

    scanf("%d", &t);

    while(t--){
        int n,k,x, count=0;

        scanf("%d %d", &n, &k);

        if(k==1){
            printf("%d\n",n);
            continue;
        }

        while(n>0){
           n= n - largest_power(n, k);

           count++;
           if(n<=0)break;
        }

        printf("%d\n",count);
    }
}
