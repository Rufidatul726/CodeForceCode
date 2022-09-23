#include<stdio.h>
#include<string.h>

int main(void){
    int i,n,t,j;
    char s[51],k;

    scanf("%d%d",&n,&t);
    scanf("%s",s);

    while(t--){
        for(i=0;i<n;i++){
            if(s[i]=='B' && s[i+1]=='G'){
                s[i]='G';
                s[i+1]='B';
                i++;
            }
        }
    }

    printf("%s",s);

}
