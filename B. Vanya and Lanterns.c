#include<stdio.h>
#include<stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main(void){
        int n,i,j,k;

        long int l,a[1001];
        double d, d_start, d_stop;

        scanf("%d%ld",&n,&l);

        for(i=0;i<n;i++){
            scanf("%ld",&a[i]);
        }

        qsort(a, n, sizeof(int), cmpfunc);

        for(i=0;i<n;i++)printf("%d\n", a[i]);

        d=a[0];
        if(a[0]!=0)d_start=a[0];
        if(l!=a[n-1])d_stop=l-a[n-1];

        for(i=1;i<n;i++){
           if(d<a[i]-a[i-1])d=a[i]-a[i-1];
        }

        printf("%f %f %f ", d, d_start, d_stop);
        if(d_start<d/2 && d_start>0.0)printf("start %.9f",d_start);
        else if(d_stop<d/2 && d_stop>0.0)printf("stop %.9f",d_stop);
        else printf("%.9f",d/2);

        return 0;
}
