#include<stdio.h>

int main(void){
    int a[100003],n,i,j,k=0,m=0,hired=0,untreted=0;

    scanf("%d",&n);

    for(i=0;i<n;i++){
         scanf("%d",&a[i]);
         if(a[i]>=0)hired=hired+a[i];
         else if(a[i]<0 && hired==0)untreted++;
         else if(a[i]<0 && hired!=0)hired--;
    }

    printf("%d\n",untreted);
}
