#include<stdio.h>
int main( )
{
    int hour1,minute1;
    int hour2,minute2;
    scanf("%d %d",&hour1,&minute1);
    scanf("%d %d",&hour2,&minute2);
    int ih=hour1-hour2;
    int im=minute1-minute2;
    if(im<0){
        im=60+im;
        ih--;
    }
    printf("差值是%d %d\n",ih,im);
    return 0;
}