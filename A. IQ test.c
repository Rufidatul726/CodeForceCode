#include<stdio.h>

int main(void){
        int n,a[101],i,j=0,k=0,s,t;

        scanf("%d",&n);

        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(a[i]%2==0){
                    s=i+1;
                    j++;
            }
            else{
                t=i+1;
                k++;
            }
        }
        if(j==1)printf("%d",s);
        else printf("%d",t);

        return 0;
}
