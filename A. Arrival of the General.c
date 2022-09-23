#include<stdio.h>

int main(void){
        int n,i,j=0,k=0,a[101],l=0,m=0;

        scanf("%d",&n);
        scanf("%d",&a[0]);
        j=a[0];
        k=a[0];

        for(i=1;i<n;i++){
            scanf("%d",&a[i]);
            if( j>=a[i]){
                    j=a[i];
                    l=i;
            }
            else if(k<a[i]){
                    k=a[i];
                    m=i;
            }
        }

        if(l>m)printf("%d",(n-1+m-l));
        else if(m>l)printf("%d",(n-l+m-2));

        return 0;
}


