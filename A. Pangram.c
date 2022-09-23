#include<stdio.h>
#include<string.h>

int main(void){
    int i,k=0,n=0,j=97;
    char a[105];

    scanf("%d",&n);
     scanf("%s",a);

     if(n<26){
        printf("NO");
        return 0;
    }

    for(i=0;i<n;i++){
       if(a[i]<92){
            a[i]=a[i]+32;
        }
    }


    for(j='a';j<='z';j++){
        for(i=0;i<n;i++){
            if(a[i]==j){
                k++;
                break;
            }
        }
    }
    if(k==26){
        printf("YES");
    }

    else{
        printf("NO");
    }
}
