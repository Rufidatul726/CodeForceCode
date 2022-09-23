#include<stdio.h>

int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}

int min(int num1, int num2)
{
    return (num1 < num2 ) ? num1 : num2;
}

int main(void){
    int ser=0,dim=0,n,i=0,count,a[1001],t,m,mi,j=1;

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    if(n==1){
        ser=a[0];
        printf("%d %d",ser,dim);
        return 0;
    }

    else if(n==2){
        ser=max(a[0],a[1]);
        dim=min(a[0],a[1]);
        printf("%d %d",ser,dim);
        return 0;
    }

        i=0;
    for(count=0;count<n/2;count++){
        if(a[i]>=a[n-j]){
            ser=ser+a[i];
            i++;
            m=max(a[n-j],a[i]);
            mi=min(a[n-j],a[i]);
            dim=dim+m;
            if(m==a[i])i++;
            else j++;
        }
        else{
            ser=ser+a[n-j];
            j++;
            m=max(a[n-j],a[i]);
            mi=min(a[n-j],a[i]);
            dim=dim+m;
            if(m==a[i])i++;
            else j++;
        }
    }

    if(n%2!=0)ser=ser+mi;

    printf("%d %d",ser,dim);
}
/*m=max(a[i],a[n-i-1]);
        mi=min(a[i],a[n-i-1]);
        ser=ser+m;

        if(mi==a[n-i-1]){
            m=max(mi,a[n-i-2]);
            mi=min(a[i],a[n-i-2]);
            dim=dim+m;
        }*/
