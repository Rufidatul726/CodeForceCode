#include<stdio.h>
#include<string.h>

int main(void){
    char p[101];
    int i,j=0,k;

    gets(p);

    for(i=0;i<strlen(p);i++){
        if(p[i]=='H' || p[i]=='Q' || p[i]=='9')
            j++;
    }

    if(j==0){
        printf("NO");
    }

    else
    printf("YES");

    return 0;
}
