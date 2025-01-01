#include<stdio.h>

int main(void){
    int t;

    scanf("%d", &t);

    while(t--){
        int n=0, m=0;

        scanf("%d %d", &n , &m);

        int a[n+1][m+1], b[n+1][m+1];

        for(int i=0; i<n; i++){
            for(j=0; j<m;  j++){
                scanf("%d", &a[i][j]);
            }
        }

        for(int i=0; i<n; i++){
            for(j=0; j<m;  j++){
                scanf("%d", &b[i][j]);
            }
        }


    }
}
