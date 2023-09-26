#include<stdio.h>
int main( )
{
    const int number=10;
    int x;
    int i;
    int count[number];
    scanf("%d",&x);
    for(i=0;i<number;i++){//数组的初始化
        count[i]=0;
    }
    while(x!=-1){
        if(x>=0 && x<=9)
        count[x]++;
        scanf("%d",&x);
    }
    for(i=0;i<number;i++){
    printf("%d出现了%d次\n",i,count[i]);
    }
    return 0;
}