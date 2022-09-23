#include<stdio.h>
#include<string.h>

int main(void){
    int i,j,k=0,n;
    char a[101],b[101],c[101];

    scanf("%s",a);
    scanf("%s",b);
    scanf("%s",c);

    if(strlen(a)+strlen(b)!=strlen(c)){
        printf("NO");
        return 0;
    }

    for(i=0;i<strlen(a);i++){
        for(j=0;j<strlen(c);j++){
            if(a[i]==c[j]){
                c[j]=' ';
                k++;
                break;
            }
        }
    }
    for(i=0;i<strlen(b);i++){
        for(j=0;j<strlen(c);j++){
            if(b[i]==c[j]){
                c[j]=' ';
                k++;
                break;
            }
        }
    }

    if(k==strlen(c)){
        printf("YES");
    }
    else{
        printf("NO");
    }
}
