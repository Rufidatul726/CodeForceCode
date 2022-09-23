#include<stdio.h>
int main(void){
     long int p,i,j,k,t,n,a[100000],s,q=0;

     scanf("%ld",&t);

     for(p=0;p<t;p++){
        scanf("%ld",&n);
        for(s=0;s<n;s++){
            scanf("%ld",&a[s]);
        }
        q=0;
        for(i=2;i<n;i++){
            if(a[0]+a[1]<=a[i]){
                printf("%ld %ld %ld\n",1,2,i+1);
                q++;
                break;
            }
        }
        if(q==0){printf("-1\n");}
     }
     return 0;
}
