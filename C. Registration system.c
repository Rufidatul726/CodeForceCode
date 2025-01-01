#include<stdio.h>
#include<string.h>

int main(void){
    int i, j, n;

    scanf("%d", &n);

    int count[n+1], last_count[n+1];
    char a[n+1][33], b[n+1][33];

    for(i=0;i<n;i++){
        count[i]=0;
        last_count[i]=0;
        scanf("%s", &a[i]);
        if(i==0)strcpy(c[i],a[i]);
        for(j=0;j<i;j++){
            if(strcmp(a[i],c[j])==0){
                count[i]=last_count[j]+1;
                last_count[j]++;
                break;
            }
            else if(j==i-1){
                strcpy(c[i],a[i]);
            }
        }
    }

    for(i=0;i<n;i++){
        if(count[i]==0)printf("OK\n");
        else{
            printf("%s%d\n", a[i],count[i]);
        }
    }

    return 0;
}
