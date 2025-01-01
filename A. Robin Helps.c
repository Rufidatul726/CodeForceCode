#include<stdio.h>

int main(void){
    int t;

    scanf("%d", &t);

    while(t--){
        int n=0, k=0, count=0, robin_has_gold=0;

        scanf("%d %d", &n, &k);

        int a[n+1];

        for(int i=0;i<n;i++){
            scanf("%d", &a[i]);
            if(a[i]>=k){
                robin_has_gold=robin_has_gold+a[i];
            }
            else if(a[i]==0 && robin_has_gold>0){
                robin_has_gold = robin_has_gold -1;
                count++;
            }
        }

        printf("%d\n", count);
    }
}
