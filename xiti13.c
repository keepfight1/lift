#include<stdio.h>
int main( )
{
    int sum,num,a=0;
    scanf("%d",&num);
    while(num!=-1){
         sum+=num;
         a++;
         scanf("%d",&num);
    }
    printf("%f",1.0*sum/a);
    return 0;
}