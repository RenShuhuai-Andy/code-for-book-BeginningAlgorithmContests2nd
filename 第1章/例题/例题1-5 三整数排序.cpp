#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int tem;
	if(a>b)
	{
		tem=a; 
		a=b;
		b=tem;
		if(b>c)
		{
			tem=b;
			b=c;
			c=tem;
			if(a>b)
			{
				tem=a;
				a=b;
				b=tem;
			}
			else
				printf("%d %d %d\n",a,b,c);
		}
		else 
			printf("%d %d %d\n",a,b,c);			
	}
	else
	{
		if(b>c)
		{
			tem=b;
			b=c;
			c=tem;
			if(a>b)
			{
				tem=a;
				a=b;
				b=tem;
			}
			else
				printf("%d %d %d\n",a,b,c);
		}
		else
			printf("%d %d %d\n",a,b,c);		
	}
//	better
//	if(a>b) {tem=a;a=b;b=tem;}
//	if(a>c) {tem=a;a=c;c=tem;}
//	if(b>c) {tem=b;b=c;c=tem;} 
//	printf("%d %d %d\n",a,b,c);
	return 0;
} 
