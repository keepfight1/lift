#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main( )
{
    srand(time(0));
    int a=rand()%100+1;
    int b,n=0;
    printf("输入一个1到100的整数");
    do
    {
        scanf("%d",&b);
        if(b>a)printf("大了\n");
        else if(a>b)printf("小了\n");
        n++;
    } while (b!=a);
    printf("你只用了%d次就猜到了这个数",n);
    return 0;
    
}