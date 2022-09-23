#include<stdio.h>
#include<string.h>

int main(void){
    char a[201],s[201]={};
    int i,j=0;

    scanf("%s",a);

    for(i=0;i<strlen(a);i++){
         if(a[i]=='W' && a[i+1]=='U' && a[i+2]=='B'){
                if(j==0 || s[j-1]==' '){i=i+2; continue;}
            s[j]=' ';
            j++;
           i=i+2;
        }
        else{
            s[j]=a[i];
            j++;
        }
    }
    s[j]='\0';

    printf("%s",s);
}
