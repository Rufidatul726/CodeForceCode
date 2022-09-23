#include<stdio.h>

int main(void){
    int t;

    scanf("%d",&t);

    while(t--){
            int n;
        scanf("%d", &n);

        int a[n],i,j;

        for(i=0;i<n;i++)scanf("%d", &a[i]);

        int diff=a[0],diff1, diff2, pos;

        for(i=1;i<n;i++){ //printf("%d %d %d \n", diff, diff1, diff2);
            if(a[i]!=a[i-1]){
                diff1=a[i];
                pos=i+1;
                if(i==n-1)diff2=a[i-2];
                else diff2=a[i+1];
                //printf("final %d %d %d \n", diff, diff1, diff2);
                break;
            }
        }

        if(diff2==diff1)printf("1\n");
        else printf("%d\n", pos);
    }
}
