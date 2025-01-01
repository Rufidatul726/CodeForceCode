#include<stdio.h>
#include <stdlib.h>
#include<math.h>>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main(void){
    int t;

    scanf("%d", &t);

    while(t--){
        int n=0, max=0;
        long long int sum=0;
        scanf("%d", &n);

        long long int a[n+1],b[n+1];

        for(int i=0;i<n;i++){
            scanf("%d", &a[i]);
            b[i]=a[i];
            sum += a[i];
            if(max<a[i]){
                max=a[i];
            }
        }

        if(n<=2){
            printf("-1\n");
            continue;
        }

        qsort(b ,n ,sizeof(int), compare);

        double average =sum/(double)n;
        double min_to_b_poor = average / 2;
        int minimum_to_accept = b[n/2];

        int min_to_get = minimum_to_accept * n * 2 + 1;

        printf(" %d %d ", sum, min_to_get);

        long long int result = 0;

        result = ceil(min_to_get) - sum;

        printf("%lld ", min_to_get-sum);

        if(result>0){
            printf("%lld\n", result);
        }else{
            printf("0\n");
        }

    }
}
