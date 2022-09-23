#include<stdio.h>
#include<string.h>

int main(void){
        char a[101],c[101],s[101];
        int i,j=0,k=0;

        gets(a);

        for(i=0;i<strlen(a);i++){
            if(a[i]>64 && a[i]<91){
                j++;
            }
            else if(a[i]>96 && a[i]<123){
                k++;
            }
        }

        if(j>k){
            for(i=0;i<strlen(a);i++){
               if(a[i]>95 && a[i]<123){
                    a[i]=a[i]-32;
               }
                continue;
            }
        }

         else if(j<=k){
            for(i=0;i<strlen(a);i++){
                 if(a[i]>63 && a[i]<91){
                    a[i]=a[i]+32;
               }
                continue;
            }
        }

        printf("%s",a);

        return 0;
}
