#include<stdio.h>

int main(void){
    int i,j,k=0;
    char a[7][3];

    for(i=0;i<6;i++){
        scanf("%s",&a[i]);
        if(i>0 && a[0][0]==a[i][0])k++;
        else if(i>0 && a[0][1]==a[i][1])k++;
    }

    if(k>0)printf("YES");
    else printf("NO");
}
