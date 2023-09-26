#include<stdio.h>
int main( )//最大公约数，辗转相除法
{
    int a,b,t;
    scanf("%d %d",&a,&b);
    while(b!=0){
        t=a%b;
        a=b;
        b=t;
    }
    printf("a和b的最大公约数是%d",a);
    return 0;
}