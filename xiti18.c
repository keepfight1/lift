#include<stdio.h>
int main( )//输出100以内的素数
{
    int c,a,b;
    for(a=2;a<100;a++){
        int x=1;
    for(b=2;a>b;b++){
        c=a%b;
        if(c==0){x=0;
        break;}
    }
    if(x==1)printf("%d\t",a);
    
    }
    
    return 0;

}