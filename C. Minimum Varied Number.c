#include<stdio.h>

int main(void){
    int t;

    scanf("%d", &t);

    while(t--){
        int s,i,j,k=0;
        scanf("%d", &s);

        if(s<10){
            printf("%d\n", s);
            continue;
        }

        char out[10]={'\0'};


        for(i=9;i>0;i--){
                if(s<10 && i>s){
                    out[9-i]=s+48;
                    k=9-i;
                    break;
                }
            out[9-i]= i+48;
            s=s-i;
            if(s<=0){
                k=9-i;
                break;
            }
        }
        char temp;

        for(i=0;i<=k;i++){
            for(j=0;j<i;j++){
                if(out[i]<out[j]){
                    temp=out[i];
                    out[i]=out[j];
                    out[j]=temp;
                }
            }
        }
        printf("%s\n", out);
    }
}
