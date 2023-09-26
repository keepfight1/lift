#include<stdio.h>
#include<math.h>
int main( )
{int n;
 printf("input how many pepole:");
 scanf("%d",&n);
  int a[n],b[n],c[n],i,j,k;
  printf("input the floor:\n");//输入用户起始楼层 ,目标楼层 
 for(i=0;i<n;i++)
 {
  scanf("%d,%d",&a[i],&b[i]);
 }
  printf("\n");
  int m,t,r,x,y;
    t=0,r=0;
  	printf("电梯起始楼层："); 
    scanf("%d",&m);
    printf("%d,%d,%d\n",m,t,r);
    do
    {
 for(m,t;m<11;m++,t++)
 {
  for(i=0;i<n;i++)
  {   
   if(m==c[i])
   {
   	r=r-1;
   	printf("%d,%d,%d\n",m,t,r); 
	for(j=i;j<n-1;j++)
    {
	c[j+1]= c[j];
    } 
   }
   if(m==a[i])
   {
	if(r==4)
	continue;
    r=r+1;
    n=n-1;
    printf("%d,%d,%d\n",m,t,r);
    c[i]=b[i];
    for(j=i;j<n-1;j++)
    {
	a[j+1]=a[j];
    }
   }

  }
 }
 if(m=10&&n>0&&r>0)
 {
  for(m,t;m>0;m--,t++)
  {
   for(i=0;i<n;i++)
  {   
   if(m==c[i])
   {
   	r=r-1;
   	printf("%d,%d,%d\n",m,t,r); 
	for(j=i;j<n-1;j++)
    {
	c[j+1]= c[j];
    } 
   }
   if(m==a[i])
   {
	if(r==4)
	continue;
    r=r+1;
    n=n-1;
    printf("%d,%d,%d\n",m,t,r);
    c[i]=b[i];
 for(j=i;j<n-1;j++)
    {
	a[j+1]=a[j];
    }
   }

  }
  }
 }
}while(n!=0||r!=0);
 return 0;
 }