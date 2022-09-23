#include<stdio.h>

int main(void){
    int i,k,j,y[4002],n;

    scanf("%d%d",&n,&k);

    for(i=0;i<n;i++){
        scanf("%d",&y[i]);
        y[i]=y[i]+k;
        if(y[i]>5){n--;
        i--;}
    }

    printf("%d",n/3);
}
