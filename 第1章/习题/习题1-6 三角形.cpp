#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int tem;
	if(a>b) {tem=a;a=b;b=tem;}
	if(a>c) {tem=a;a=c;c=tem;}
	if(b>c) {tem=b;b=c;c=tem;}
	if(a<0 || b<0 || c<0 || (a+b)<=c)
		printf("not a triangle\n");
	else if(a*a+b*b==c*c)
		printf("yes\n");
	else
		printf("no\n");
	return 0;
} 
