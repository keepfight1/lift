#include<stdio.h>
int main( )
{
    int a,n;
    scanf("%d",&a);
    n++;
    a/=10;
    while(a>0){
        n++;
        a/=10;
    }
    printf("%d",n);
}