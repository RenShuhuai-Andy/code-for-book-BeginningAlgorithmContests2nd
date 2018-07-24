#include <stdio.h>
int main()
{
	int a,b,c;
	int kase=1;
	while(scanf("%d%d%d",&a,&b,&c)==3)
	{
		int tag=0;
		for(int s=10;s<=100;s++)
		{
			if(s%3==a && s%5==b && s%7==c)
			{
				printf("Case %d: %d\n",kase,s);
				tag=1;
			}
		}
		if(tag==0)
			printf("Case %d: No answer",kase);
	}
	return 0;
} 
