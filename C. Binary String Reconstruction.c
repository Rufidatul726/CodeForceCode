#include<stdio.h>
#include<string.h>

int main(void){
    int i,j,k1=0,k2=0,x,n,t;
    char a[100003],w[100004]={};


    scanf("%d",&t);

    while(t--){
            k1=0;
        scanf("%s",a);

        for(i=0;i<strlen(a);i++){
            w[i]='3';
        }

        scanf("%d",&x);

        for(i=0;i<strlen(a);i++){
            if(a[i]=='1' && (i>x) )w[i-x]='1';
            else if(a[i]=='1' && i+x<=strlen(a))w[i+x]='1';
            else if(a[i]=='0' && (i<x ))
        }
        for(i=0;i<strlen(a);i++){
            if(w[i]=='0')k1++;
        }
        if(k1==strlen(a)){
            printf("-1");
        }
        else{
            for(i=0;i<strlen(a);i++){
                printf("%c",w[i]);
            }
        }
        printf("\n");
    }
}
