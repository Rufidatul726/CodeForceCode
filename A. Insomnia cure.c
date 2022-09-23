#include<stdio.h>

int main(void){
        long int a,b,c,d,i=0,j,k,l;

        scanf("%ld%ld%ld%ld%ld",&a,&b,&c,&d,&l);

        j=l;
       while(l--){
            if((l+1)%a!=0 && (l+1)%b!=0 && (l+1)%c!=0 &&  (l+1)%d!=0)j--;
       }

        printf("%ld",j);

}

/*if(a!=1 && b!=1 && c!=1 && d!=1)i++;
        if(a!=2 && b!=2 && c!=2 && d!=2)i++;
        if(a!=3 && b!=3 && c!=3 && d!=3)i++;
        if(a!=4 && b!=4 && c!=4 && d!=4)i++;*/
