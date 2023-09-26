#include<stdio.h>
int main( )
{
    printf("请输入你几尺几寸");
    double foot;
    double inch;
    scanf("%lf %lf",&foot,&inch);
    double height;
    height=(foot+inch/12)*0.308;
    printf("你的身高是%f米\n",height);
    return 0;
}