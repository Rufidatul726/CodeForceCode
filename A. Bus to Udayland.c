#include<stdio.h>
#include<string.h>

int main(void){
    int n,i,j,k=0;
    char a[1001][6];

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%s",a[i]);
        for(j=0;j<4;j++){
            if(a[i][j]=='O' && a[i][j+1]=='O' && k==0){
                a[i][j]='+';
                a[i][j+1]='+';
                k++;
            }
        }
    }

    if(k==1)printf("YES\n");
    else{
        printf("NO\n");
        return 0;
    }

    for(i=0;i<n;i++){
        printf("%s\n",a[i]);
    }
}
