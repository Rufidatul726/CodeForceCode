#include<stdio.h>
#include<string.h>

int main(void){
    int t,n,i,j,k=0,s=0;

    scanf("%d",&t);

    while(t--){
            k=0;
            s=0;
            j=0;
        scanf("%d",&n);
        char a[n+2];

        scanf("%s",a);

        for(i=0;i<n;i++){
           if(a[i]=='('){
                   for(j=i+1;j<n;j++){
                        if(a[j]==')'){
                            a[i]='0';
                            a[j]='0';
                            break;
                        }
                }
            }
            if(j==n-1 && a[j]!='0')break;
        }

        for(i=0;i<n;i++){
            if(a[i]=='0')s++;
        }
        printf("%d\n",(n-s)/2);
    }
}
