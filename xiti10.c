#include<stdio.h>
int main( )
{
    int score;
    scanf("%d",&score);
    _Bool a,b;
    a=score>=60;
    b=score<=69;
    if(a&&b) printf("the grade is C\n");
    else printf("bujige\n");
    return 0;
}