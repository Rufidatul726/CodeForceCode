#include<stdio.h>


int main(void){
    int t;

    scanf("%d", &t);

    while(t--){
        int a[2][2]={0};
        int i,j;
        int sum=0, one=0;

        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                scanf("%d", &a[i][j]);
                if(a[i][j]==1)one++;
            }
        }

        if(one==0)printf("0\n");
        else if(one==4)printf("2\n");
        else printf("1\n");
    }
}
