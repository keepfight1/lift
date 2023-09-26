#include<stdio.h>
int main( )
{
    int m,n;
    int k,i;
    int sum;
    scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++){
        int isprime;
        isprime=1;
        for(k=2;k<=i-1;k++){
            if(i%k==0){
                isprime=0;
                break;
            }
        }
        if(isprime){
            sum+=i;
        }
    }
    
    printf("%d",sum);
    return 0;
}