#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(char*)a - *(char*)b );
}

int main(void){
	int t,i;

	scanf("%d", &t);

	while(t--){
        int n;
        scanf("%d", &n);

        char arr[n+2], sorted[n+2];

        scanf("%s", arr);
        strcpy(sorted, arr);

        qsort(sorted, n, sizeof(char), cmpfunc);

        int sum=2;

        for(i=1;i<n;i++){
            if(sorted[i-1]==sorted[i])sum++;
            else sum=sum+2;
        }

        printf("%d\n", sum);

	}
}

