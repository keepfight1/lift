#include<stdio.h>
int main( )//求和
{
    int a,n;
    double sum,sign=1.0;
    scanf("%d",&n);
    for(a=1;a<=n;a++){
        sum+=sign/a;
        sign=-sign;
    }
    printf("%f",sum);
    return 0;
}