#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(char*)a - *(char*)b );
}


int main(void){
    int n,i=0,j,t;
    char s[1001][1001],a[1000001],p;

    scanf("%d",&t);

    while(t--){
        scanf("%d",&n);
        i=0;
        j=0;
        while(i<n){
            scanf("%s",s[i]);
            if(i==0)strcpy(a,s[0]);
            else strcat(a,s[i]);
            i++;
        }
        int k=strlen(a);

        qsort(a,k,sizeof(char),cmpfunc);

        for(i=0;i<k;i++){
            if(a[i]==a[i+n-1]){
                i=i+n-1;
            }
            else{
                j=3;
                break;
            }
        }
        if(j==0)printf("YES\n");
        else printf("NO\n");
    }
}
