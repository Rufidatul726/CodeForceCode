#include<stdio.h>
#include<stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main(void){
        int i,j,k=0,n;
        long int s[5];

        for(i=0;i<4;i++){
            scanf("%d",&s[i]);
        }

        qsort(s, 4, sizeof(long int), cmpfunc);

        for(i=1;i<4;i++){
            if(s[i-1]==s[i])k++;
        }

        printf("%d",k);
}
