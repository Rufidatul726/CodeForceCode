#include<stdio.h>

int main(void){
    int n,a[5001],i,j,k,m=0,r=0,p=0,s=0;

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]==1)m++;
        else if(a[i]==2)r++;
        else p++;
    }

    if(m==0 || r==0 || p==0){
        printf("0");
        return 0;
    }

    if(m<=r && m<=p){
        printf("%d\n",m);

        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(a[j]==1){printf("%d ",j+1);
                a[j]=0;
                break;}
            }
            for(j=0;j<n;j++){
                if(a[j]==2){printf("%d ",j+1);
                a[j]=0;
                break;}
            }
            for(j=0;j<n;j++){
                if(a[j]==3){printf("%d\n",j+1);
                a[j]=0;
                break;}
            }
        }
    }

    else if(p<=r && p<=m){
        printf("%d\n",p);

        for(i=0;i<p;i++){
            for(j=0;j<n;j++){
                if(a[j]==1){printf("%d ",j+1);
                a[j]=0;
                break;}
            }
            for(j=0;j<n;j++){
                if(a[j]==2){printf("%d ",j+1);
                a[j]=0;
                break;}
            }
            for(j=0;j<n;j++){
                if(a[j]==3){printf("%d\n",j+1);
                a[j]=0;
                break;}
            }
        }
    }

   else if(r<=m && r<=p){
        printf("%d\n",r);

        for(i=0;i<r;i++){
            for(j=0;j<n;j++){
                if(a[j]==1){printf("%d ",j+1);
                a[j]=0;
                break;}
            }
            for(j=0;j<n;j++){
                if(a[j]==2){printf("%d ",j+1);
                a[j]=0;
                break;}
            }
            for(j=0;j<n;j++){
                if(a[j]==3){printf("%d\n",j+1);
                a[j]=0;
                break;}
            }
        }
    }
}
