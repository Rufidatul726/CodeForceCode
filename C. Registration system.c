#include<stdio.h>
#include<string.h>

int main(void){
        long int i,j=0,k,n;

        scanf("%ld",&n);
        long int p[n+1];
        char a[n+1][35],b[n+1][35];

        for(i=0;i<n;i++){
            p[i]=0;
        }

        for(i=0;i<n;i++){
            scanf("%s",a[i]);

            if(i==0){
                strcpy(b[i], "Ok");
                continue;
            }
            for(k=0;k<i;k++){
                if(strcmp(a[i], a[k])==0){
                    p[k]++;
                    sprintf(b[i], "%s%d", a[i], p[k]);
                }
                else strcpy(b[i], "OK");
            }
        }

        for(i=0;i<n;i++){
            printf("%s\n", b[i]);
        }
}
