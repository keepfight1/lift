#include<stdio.h>
int main( )//水仙花数
{
    int n,i=1;
    scanf("%d",&n);
    int first=1;
    while(i<n){
        first*=10;
        i++;
    }
    i=first;
    while(i<first*10)//限制i是n位数
        {int t=i;
        int sum=0;
        do{
            int d=t%10;
            t/=10;
            int p=d;
            int j=1;
            while(j<n){
                p*=d;
                j++; 
            }
            sum+=p;
            if(sum==i){
                printf("%d\n",sum);
            }

        }while(t>0);
        i++;
    }
    return 0;
}