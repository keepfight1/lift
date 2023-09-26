#include<stdio.h>
int main( )
{
    int a,y;
    printf("请分别输入时间和流失的时间");
    scanf("%d %d",&a,&y);
    int b=a/100;
    int c=a%100;
    int x=b*60+c;
    int time=x+y;
    int hour=time/60;
    int minute=time%60;
    int t=hour*100+minute;
    printf("最终时间是%d",t);
    return 0;
}