#include<stdio.h>
int main( )
{
    int a;
    printf("请输入长度");
    scanf("%d",&a);
    int foot;
    int inch;
    int b;
    b=(a/30.48)*12.0;
    foot=b/12;
    inch=b%12;
    printf("%d尺%d寸",foot,inch);
    return 0;
}