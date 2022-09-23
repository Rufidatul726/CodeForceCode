#include<stdio.h>
#include<string.h>

int main(void){
    int t, i;

    scanf("%d", &t);

    while(t--){
        int n,i,j;

        scanf("%d", &n);
        int a[n+1];

        for(i=0;i<n;i++)scanf("%d", &a[i]);

        char string[n][15];
        for(i=0;i<n;i++){
            scanf("%[^\n]", string[i]);
        }

        for(i=0;i<n;i++){
            for(j=strlen(string[i])-1;i>0;i--){
                if(string[i][j]=='U'){
                    if(a[i]==0)a[i]=10;
                    a[i]--;
                }

                else if(string[i][j]=='D'){
                    if(a[i]==9)a[i]=-1;
                    a[i]++;
                }
                if(string[i-1]==' ')break;
            }
        }

        for(i=0;i<n;i++)printf("%d ", a[i]);
        printf("\n");

    }
}
