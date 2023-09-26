#include<stdio.h>
int main( )
{
    int a,i=0;
    float sum;
    do{
        scanf("%d",&a);
        i++;
        sum+=a;
    }while(a!=0);
    printf("平均数是%f\n",sum/(i-1));
    return 0;
}