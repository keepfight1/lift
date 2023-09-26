#include<stdio.h>
int main( )//九九乘法表
{
    int i,j,k;
    for(i=1;i<=9;i++){
        for(j=1;j<=i;j++){
            k=i*j;
            printf(" %d*%d=%d ",j,i,i*j);
            if(k<10){
                printf(" ");
            }//为了补出个位数后面的空
            }
            printf("\n");//换行
        }
    }
