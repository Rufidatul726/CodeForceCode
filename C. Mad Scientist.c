#include<stdio.h>

int main(void){
    long int n,m,s,i,y[1001],w;
    char x[1001];

    scanf("%ld",&n);

    for(w=1;w<=n;w++){
            int j=0;
        scanf("%ld",&m);
        for(i=0;i<m;i++){
            scanf("%ld %c",&y[i],&x[i]);
        }
    printf("Case %ld:\n",w);

        for(i=0;i<m;i++){
            s=i+1;
                for(;x[s-1]==x[s];s++){
                    y[i]=y[i]+y[s];
                }

            printf("%ld %c\n",y[i],x[i]);
            i=s-1;
        }

    }
}
