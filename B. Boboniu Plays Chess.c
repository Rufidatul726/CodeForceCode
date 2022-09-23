#include<stdio.h>

int main(void){
        int i,j,k,m,n,s,x,y;

        scanf("%d%d%d%d",&m,&n,&x,&y);

        for(i=y;i<=n;i++){
            for(j=x;j<=m;j++){
                printf("%d %d\n",j,i);
            }
            /*for(j=1;j<m;j++){
                printf("%d %d\n",j,i);
            }
            j++;*/
        }
}
