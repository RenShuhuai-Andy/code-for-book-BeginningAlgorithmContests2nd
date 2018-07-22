#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	//best
	//printf("%d %d",b,a); 
	int tem;
	tem=b;
	b=a;
	a=tem;
	printf("%d %d\n",a,b);
} 
