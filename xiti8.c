#include<stdio.h>
int main( )
{
    int score;
    scanf("%d",&score);
    printf("你的成绩是%d\n",score);
    switch(score/10){
        case 10:
        case 9:
        printf("A");
        break;
        case 8:
        printf("B");
        break;
        case 7:
        printf("C");
        break;
        case 6:
        printf("D");
        break;
        defaut:
        printf("不及格");
        break;
    }
    return 0;

}