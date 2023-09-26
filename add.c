#include<stdio.h>
int main( )
{
     int i=9;
     int *p=&i;
     int b=*p;
     printf("%d",b);
     return 0;
     
}