#include<stdio.h>
int main( )
{
    int a;
    scanf("%d",&a);
    int b,c;
    for(b=2;a>b;b++){
        c=a%b;
        if(c=0)break;
        
    }
    if(a==b){
        printf("%d不是素数",a);
    }else{
        printf("%d是素数",a);
    }
    return 0;

}