#include<stdio.h>

int main(void){
        int s,n,x[10003],y[10003],i,j,t;

        scanf("%d%d",&s,&n);

        for(i=0;i<n;i++){
            scanf("%d%d",&x[i],&y[i]);
        }

        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if(x[i]>x[j]){
                    t=x[i];
                    x[i]=x[j];
                    x[j]=t;
                    t=y[i];
                    y[i]=y[j];
                    y[j]=t;
                }
            }
        }

        for(i=0;i<n;i++){
            if(x[i]>=s){
                printf("NO\n");
                return 0;
            }
            else
                s=s+y[i];
        }

        printf("YES\n");
        return 0;
}
