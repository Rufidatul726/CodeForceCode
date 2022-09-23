#include<stdio.h>
#include<math.h>

int ifPrime(int n){
   int flag=0;
  for (int i = 2; i < n / 2; ++i) {
    if (n % i == 0) {
      flag = 1;
      return 0;
    }
  }
   // flag is 0 for prime numbers
  if (flag == 0)return 1;
}

long int findRoot(long long int n){
    long int squareRoot;
    long double temp1, temp2;



    return 0;
}

int main(void){
  long int j, flag = 0;
  long long int n;
  long int t;

  scanf("%ld",&t);

  while(t--){
        scanf("%lld", &n);
        if(n==4){
            printf("YES\n");
            continue;
        }
        else if(n%2==0){
           printf("NO\n");
           continue;
        }
    j=findRoot(n);
    if(j==0){
        printf("NO\n");
        continue;
    }
    flag=ifPrime(j);
    if(flag==1)printf("YES\n");
    else printf("NO\n");

  }

  return 0;
}
