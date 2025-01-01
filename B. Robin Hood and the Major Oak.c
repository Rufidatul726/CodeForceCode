#include<stdio.h>

int main(void){
    int t;

    scanf("%d", &t);

    while(t--){
        int n=0, k=0;

        scanf("%d %d", &n, &k);

        if(n%2==0 && k==1){
            printf("YES\n");
            continue;
        }

        if(n%2!=0 && k==1){
            printf("NO\n");
            continue;
        }

        if(k%4==0){
            printf("YES\n");
            continue;
        }
        if((k-2)%4==0){
            printf("NO\n");
            continue;
        }

        if(n%2==0){
            if((k-1)%4==0){
               printf("YES\n");
                continue;
            }else{
                printf("NO\n");
                continue;
            }
        }

        if(n%2!=0){
            if((k-1)%4==0){
               printf("NO\n");
                continue;
            }else{
                printf("YES\n");
                continue;
            }
        }

    }
}

