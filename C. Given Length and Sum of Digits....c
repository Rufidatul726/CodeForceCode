#include<stdio.h>

int main(void){
    int n,k,i;
    char a[101];

    scanf("%d%d",&n,&k);

    if(k==0 && n%2==0){
        printf("-1 -1");
        return 0;
    }


    for(i=1;i<=n;i++){
        if(k>=i*9)a[i-1]=9;
        else{

        }
    }

}
