#include<stdio.h>
int main( )
{
    int hour1,minute1;
    int hour2,minute2;
    scanf("%d %d",&hour1,&minute1);
    scanf("%d %d",&hour2,&minute2);
    int t1=hour1*60+minute1;
    int t2=hour2*60+minute2;
    int t;
    if(t1>t2)t=t1-t2;
    else t=t2-t1;
    printf("相差%d时%d分",t/60,t%60);
    return 0;
}