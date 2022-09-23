#include<stdio.h>
#include<string.h>

int main(void){
    int i,p[101],q[101],n,x=0;

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d%d",&p[i],&q[i]);
        if(p[i]+2<=q[i]){
            x++;
        }
        continue;
    }

    printf("%d",x);

    return 0;
}
