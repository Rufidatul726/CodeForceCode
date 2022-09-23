#include<stdio.h>

int power(int x){
    int p2=1;
    while(x!=0){
        p2=p2*10;
        x--;
    }
    return p2;
}

int main(void){
    int i,j=0,k,t,n,m[5];

    scanf("%d",&t);

    while(t--){
        j=0;
        scanf("%d",&k);
        for(i=0;i<5;i++){
            if(k%10!=0){
                n=power(i);
                m[j]=(k%10)*n;
                j++;
            }
            k=k/10;
            if(k==0){
                    printf("%d\n",j);
            while(j--){
                printf("%d\t",m[j]);
            }
            printf("\n");
                break;
            }
        }
    }
}
