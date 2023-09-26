#include<stdio.h>
int main( )
{
    int a,b,c,d,e;
    printf("请输入一个三位数，我将把它倒序");
    scanf("%d",&a);
    b=a/100;
    c=a%100;
    d=c/10;
    e=c%10;
    int x=e*100+d*10+b;
    printf("%d",x);
    return 0;
}