#include<stdio.h>

int main(void){
        int n,m,i,j;

        scanf("%d%d",&n,&m);

        i=n+(n/m);

        for(j=n+1;j<=i;j++){
            if(j%m==0)i++;
        }

        printf("%d",i);
}
