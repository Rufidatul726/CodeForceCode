#include<stdio.h>

int main(void){
    int i,j=0,k,n;

    scanf("%d",&n);

    while(n--){
        scanf("%d",&i);
        if(i==1){j=1;}
    }

    if(j==0){
        printf("EASY");
    }
    else if(j==1){
        printf("HARD");
    }
}
