#include<stdio.h>

int main(void){
    int i=0,j=0,k,a,b;

    scanf("%d%d",&a,&b);

    if(a<b){
        printf("-1");
        return 0;
    }
    int c=a;
    if(a%2!=0){
        i++;
        c--;
    }
    i=i+c/2;

    if(i%b!=0)i=(i/b+1)*b;

    if(i>a)i=a;

    printf("%d",i);
}
