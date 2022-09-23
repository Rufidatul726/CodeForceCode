#include<stdio.h>

int main(void){
    int i,j=0,k,n,m,x,y,t;

    scanf("%d",&t);

    while(t--){
            j=0;
        scanf("%d%d%d",&n,&x,&y);

        if(n==2){
            printf("%d %d\n",x,y);
            continue;
        }


            if((n-y)%2!=0 && x==1){
                m=y/(n-1);
                for(i=1;i<=n;i++){
                    printf("%d ",x);
                    x=x+m;
                }
                printf("\n");
                continue;
            }

             if((n-y)%2==0 && x==1){
                j=y-x;
                for(i=0;i<n;i++){
                    printf("%d ",x);
                    x=x+j;
                }
                printf("\n");
                continue;
             }

             if(y-x==1){
                    for(i=0;i<n;i++){
                        printf("y");
                        y--;
                    }
                    continue;
             }

             if(x!=1){
                for(i=2;i<y;i++){
                    if(x%i==0 && y%i==0 && y-x<n*i)
                }
             }

    }
}
