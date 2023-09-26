#include<stdio.h>
int main( )
{
    int amount=100;
    int price;
    printf("要支付");
    scanf("%d",&price);
    printf("请输入票面");
    scanf("%d",&amount);
    int change=amount-price;
    printf("应找您%d元\n",change);
    return 0;
}