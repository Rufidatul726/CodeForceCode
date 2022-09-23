#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
    int a1,a2,a3,a4,i;
    long int s=0;
    char p[100003];

    scanf("%d%d%d%d",&a1,&a2,&a3,&a4);
    scanf("%s",p);

    for(i=0;i<strlen(p);i++){
        if(p[i]=='1')s=s+a1;
        else if(p[i]=='2')s=s+a2;
        else if(p[i]=='3')s=s+a3;
        else if(p[i]=='4')s=s+a4;
    }

    printf("%ld",s);
}
