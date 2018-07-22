#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a,b,c; 
	a=n/100;
	b=(n%100)/10;
	c=(n%100)%10;
	printf("%d%d%d",c,b,a);
	
	//standard
	//printf("%d%d%d",n%10,n/10%10,n/100);
	
	//三位数反转(2)
	//int m;
	//m=(n%10)*100+(n/10) 
}
