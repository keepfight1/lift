#include<stdio.h>
int main( )
{
    int a;
    printf("你的成绩是");
    scanf("%d",&a);
    if(a>=90){
        printf("A\n");
    }
    else if(a>=80){
        printf("B\n");
    }
    else if(a>=70){
        printf("C\n");
    }
    else if(a>=60){
        printf("D\n");
    }
    else printf("不合格");
    return 0;
}