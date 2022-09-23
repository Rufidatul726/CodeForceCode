#include<stdio.h>
#include<string.h>

int main(void){
    int i,j=0,k=0;
    long int n;
    char s[100001];

    scanf("%ld",&n);

    scanf("%s",s);

    for(i=0;i<strlen(s);i++){
        if(s[i]=='A'){
            j++;
        }
        else if(s[i]=='D'){
            k++;
        }
    }

    if(j==k){
        printf("Friendship");
    }
    else if(j<k){
        printf("Danik");
    }
    else if(j>k){
        printf("Anton");
    }

    return 0;
}
