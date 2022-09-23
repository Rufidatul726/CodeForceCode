#include<stdio.h>

int main(void){
    int t,x,m,n,i,defeat=0;

    scanf("%d",&t);

    while(t--){
        defeat=0;
        scanf("%d%d%d",&x,&m,&n);

        for(i=0;i<m;i++){
                if(x<11)break;
            x=x/2+10;
            if(x<1){
                defeat=1;
                 printf("YES\n");
                break;
            }
        }

        if(defeat==1){
            continue;
        }

        for(i=0;i<n;i++){
            x=x-10;
            if(x<1){
                defeat=1;
                 printf("YES\n");
                 break;
            }
        }
        if(defeat==0)printf("NO\n");
    }
}
