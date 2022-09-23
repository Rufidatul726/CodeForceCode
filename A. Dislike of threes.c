#include<stdio.h>

int findThree(int n){
    int i,count=0;
    for(i=3;i<=n;i=i+30){
        if(i%3==0)count++;
    }
    return count;
}

int main(void){
    int t;

    scanf("%d", &t);

    while(t--){
        int k;

        scanf("%d", &k);

        int remainderThree=k/3;
        int remainderTen=k/10;
        int remainderThirty=findThree(k);
        int distance;

        int sum=0;
        int prevSUm=k;
        int i;
        if(k<3){
            printf("%d\n",k);
            continue;
        }

        while(1){
            sum=remainderTen+remainderThree;
            if(remainderTen>0)sum=sum-remainderThirty;
            prevSUm=k;
            sum=sum+k;
            distance=sum=prevSUm;

            if()

            remainderThree=prevSUm/3;
            remainderTen=prevSUm/10;
            if(prevSUm%10>2)remainderTen++;
            remainderThirty=findThree(prevSUm);
        }

        while(1){
            sum=remainderTen+remainderThree;
            if(remainderTen>0)sum=sum-remainderThirty;
            k=sum+k;
            prevSUm=sum;
            if(k/3!=(k-prevSUm)/3){
                k++;
            }

            printf("ki hoilo? wait sum= %d, prevsum= %d , k= %d\n",sum, prevSUm, k);

            if(sum<3 || prevSUm>=k){
                    if(k/3!=(k-prevSUm)/3)k++;
                break;
            }
            remainderThree=prevSUm/3;
            remainderTen=prevSUm/10;
            if(prevSUm%10>2)remainderTen++;
            remainderThirty=findThree(prevSUm);
        }
        printf("%d\n", k);

    }
}
