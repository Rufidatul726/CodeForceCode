#include<stdio.h>
#include<string.h>

int main(void){
    char a[100],b[100];
    long int n[100005],i,change;

    scanf("%ld",&n);

    while(n--){
            change=0;
        scanf("%s",a);

        for(i=1;i<strlen(a);i++){
            if(a[i]<58 && a[i]>47 && a[i]>64 && a[i]<91)change++;
            if(change==2)break;
        }

        if(change==1){
            printf("R");
            for(i=0;)
        }
    }
}
