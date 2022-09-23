#include<stdio.h>

int main(void){
    int i,j=0,n,k,m;

    scanf("%d%d",&n,&k);
    char a[n+1][k+1];

    for(i=0;i<n;i++){
        for(m=0;m<k;m++){
                getchar();
            scanf("%c",&a[i][m]);
            if(a[i][m]=='C' || a[i][m]=='M' || a[i][m]=='Y')j++;
        }
    }

    if(j>0)printf("#Color\n");
    else printf("#Black&White\n");
}
