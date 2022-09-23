#include<stdio.h>

int main(void){
         long int n,i,j,s[100000],sum1=0,sum2=0,p1=0,p2=0,p3=0,p4=0;

         scanf("%ld",&n);

         for(i=0;i<n;i++){
               scanf("%d",&s[i]);
         }


          for(i=0;i<n;i++){
            if(s[i]==4){
                p1++;
            }
            else if(s[i]==3){
                p2++;
            }
            else if(s[i]==2){
                p3++;
            }
            else if(s[i]==1){
                p4++;
            }
          }

          sum1=p1+p2;


            if(p4>p2){
               sum2=p4-p2;
            }

            sum2=(p3*2+sum2);



            if(sum2%4==0){
                sum2=sum2/4;
            }

           else{
                sum2=sum2/4+1;
            }

            j=sum1+sum2;

            printf("%ld",j);

            return 0;

}
