#include <stdio.h>
#include <time.h>
int main()
{
	const int MOD=1000000;
	long n;
	scanf("%ld",&n);
	long long sum=0;
	for(int i=1;i<=n;i++)
	{
		long long term=1;
		for(int j=1;j<=i;j++)
		{
			term=term*j%MOD;
		}
		sum=(sum+term)%MOD;
	}
	printf("%lld\n",sum);
	printf("Time used = %.2f\n",(double)clock()/CLOCKS_PER_SEC);
	return 0;
} 
