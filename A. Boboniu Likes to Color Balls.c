#include<stdio.h>

int main(void){
        int i,j=0,t,r,g,b,w,k;

        scanf("%d",&t);

        for(i=0;i<t;i++){
                j=0;
                scanf("%d%d%d%d",&r,&g,&b,&w);
                if(r%2!=0)j++;
                if(g%2!=0)j++;
                if(b%2!=0)j++;
                if(w%2!=0)j++;

            if((j==3 && r!=0 && g!=0 && b!=0) || j==1 || j==4 || j==0){
                    printf("Yes\n");
            }
            else{
                printf("No\n");
            }

        }
        return 0;
}
/*if(r%2==0)j++;
            if(g%2==0)j++;
            if(b%2==0)j++;
            if(w%2==0)j++;*/
