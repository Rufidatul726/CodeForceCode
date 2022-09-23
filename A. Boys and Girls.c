#include<stdio.h>

int main(void){
    int n,m,i,j=0;
    char a[101];
    FILE *in,*out;

    in=fopen("F:\Codeforce\253A_input.txt","r");
    out=fopen("F:\Codeforce\253A_output.txt","w");

    fscanf(in,"%d",&n);
    fscanf(in,"%d",&m);

    if(n>=m){
        for(i=0;i<n+m;i++){
            if(i%2==0)a[i]='B';
            else a[i]='G';
        }
    }
    else if(n<m){
        for(i=0;i<n+m;i++){
            if(i%2!=0)a[i]='B';
            else a[i]='G';
        }
    }

    for(i=0;i<n+m;i++){
        fprintf(out,"%c",a[i]);
    }

    fclose(in);
    fclose(out);

    return 0;
}

