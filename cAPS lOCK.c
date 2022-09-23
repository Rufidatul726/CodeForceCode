#include<stdio.h>
#include<string.h>

int main(void){
    int i,j,n,count=0;
    char a[101];

    gets(a);

    for(i=1;i<strlen(a);i++){
        if(a[i]>64 && a[i]<91){
            count++;
        }
    }

    if(count==strlen(a)-1){
        if(a[0]<123 && a[0]>96){a[0]=a[0]-32;}
        else{a[0]=a[0]+32;}
        for(i=1;i<strlen(a);i++){
            a[i]=a[i]+32;
        }
    }

    printf("%s",a);

    return 0;
}
