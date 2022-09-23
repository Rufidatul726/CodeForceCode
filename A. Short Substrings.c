#include<stdio.h>
#include<string.h>

int main(void){
    int t,n,i,j=0,k;

    char a[101],b[101];

    scanf("%d",&t);

    while(t--){
        scanf("%s",a);
        j=0;
        for(i=0;i<strlen(a);i++){
            if(i>0 && i%2==0)continue;
            b[j]=a[i];
            j++;
        }
        b[j]='\0';
        printf("%s\n",b);


    }
}
