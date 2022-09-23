#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main(void){
    int t,i,n,b[101]={0};
    char s[101],a[100][101];

    scanf("%d",&t);

    while(t--){
        int k=0,j=0;

        scanf("%s",s);

        for(i=0;i<strlen(s);i++){
            if(s[i]=='1'){
                b[j]=k;
                k++;
                n=j;
            }
            else{
               j++;
               k=0;
            }
        }

        if(n==0){
            printf("0\n");
            continue;
        }

        qsort(b, n, sizeof(int), cmpfunc);

        int sum=0;

        for(i=0;i<n;i=i+2){
            sum=sum+b[i];
        }

        printf("%d\n",sum);

    }
}
