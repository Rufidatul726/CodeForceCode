#include<stdio.h.>
#include<string.h>

int main(void){
          int i,j,c1=0;
          char a[101],b[8]="1111111",c[8]="0000000",t[8]={0};

          gets(a);

          for(i=0;i<strlen(a);i++){
                    for(j=0;j<7;j++){
                              t[j]=a[i+j];
                         }
                    t[7]='\0';

                    if(strcmp(t,b)==0 || strcmp(t,c)==0){
                         c1++;
                    }
          }
          if(c1!=0){
               printf("Dangerous");
          }
          else
               printf("No");

          return 0;
}
