#include<stdio.h>
int main( )//整数的拆解
{
    int b,x,a=1;
    int t;
    scanf("%d",&x);
    t=x;
    while(t>9){
        a*=10;
        t/=10;
    }
    do{
        b=x/a;
        x%=a;
        printf("%d",b);
        if(x>0){
            printf(" ");
        }
        a/=10;
    }while(x>0);
    return 0;
}