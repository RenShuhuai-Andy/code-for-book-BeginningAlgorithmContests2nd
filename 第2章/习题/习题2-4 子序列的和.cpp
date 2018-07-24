#include <stdio.h>
int main()
{
	long n=0,m=0;
	int kase=0;
	while(scanf("%ld%ld",&n,&m)==2 && n && m)
	{
		long double s=0.0;
		for(int i=n;i<=m;i++)
		{
			s+=1.0/(i*i);
		}
		kase++;
		printf("Case %d: %.5lf\n",kase,s);
	} 
	return 0;
}
