#include<stdio.h>
#include<string.h>

int main(void){
    char a[100],m[12],p[100],q[100],b;
    int n,i,r[100],j,k;

    scanf("%d",&n);

    for(j=0;j<n;j++){
            scanf("%s",a);

    k=strlen(a);
    if(k>=10){
    for(i=0;i<=k;i++){
            if(i==0)
                p[j]=a[0];
            if(i==i)
            {
                r[j]=i-2;
                q[j]=a[i-1];
            }
    }
        printf("%c%d%c\n",p[j],r[j],q[j]);}
    else{
        printf("%s\n",a);
    }}
}
