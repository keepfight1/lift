#include<stdio.h>
int main( )//输出给定条件的整数集
{
    int a;
    scanf("%d",&a);
    int i,j,k;
    int cnt=0;
    i=a;
    while(i<=a+3){
        j=a;
        while(j<=a+3){
            k=a;
            while(k<=a+3){
                k++;
                if(i!=j && i!=k && j!=k){
                    printf(" %d%d%d ",i,j,k);
                    cnt++;
                    if(cnt==6){
                        printf("\n");
                        cnt=0;
                    }
                }
            }
            j++;
        }
        i++;
    }
    return 0;
}