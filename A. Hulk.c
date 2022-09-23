#include<stdio.h>

int main(void){
    int i,j,n;

    scanf("%d",&n);

    for(i=1;i<=n;i++){
        if(i%2!=0 && i==n){printf("I hate it");break;}
        else if(i%2==0 && i==n){printf("I love it");break;}
        else{
            if(i%2==0){printf("I love that ");}
            else if(i%2!=0){printf("I hate that ");}
        }
    }
}
