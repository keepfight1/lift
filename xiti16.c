#include<stdio.h>
int main( )
{
    int a,b,c=0;
    scanf("%d",&a);
    do{
        b=a%10;
        c=c*10+b;
        a=a/10;

    }while(a>0);
    printf("%d",c);
    return 0;

}