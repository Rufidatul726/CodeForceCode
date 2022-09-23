#include<stdio.h>
#include<string.h>

int main(void){
        int i,j=0,k,n;
        char a[10000],b[1001];

        gets(a);
        k=strlen(a);
        if(k<3){
            printf("0");
            return 0;
        }
       for(i=0;i<k;i++){
            if(a[i]>96 && a[i]<123){
                b[j]=a[i];
                j++;
            }
       }
       b[j]='\0';

        k=strlen(b);

        for(i=0;i<strlen(b)-1;i++){
            for(j=i+1;j<strlen(b);j++){
                if(b[i]>96 && b[i]<123 && b[i]==b[j]){
                    b[j]=' ';
                    k--;
                }
            }
        }
        printf("%d",k);
}
