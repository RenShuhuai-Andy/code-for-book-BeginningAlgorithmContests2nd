#include <stdio.h>
#include <math.h>
int main()
{
//	wrong:没有判断n是否是完全平方数 
//	for(int n=1000;n<=9999;n++)
//	{
//		if(n%10==((n/10)%10) && ((n/100)%10)==n/1000)
//			printf("%d\n",n);
//	}
	
//	standard:
	for(int a=1;a<=9;a++)
	{
		for(int b=0;b<=9;b++)
		{
			int n=a*1100+b*11;
			int m=floor(sqrt(n)+0.5);
			if(m*m==n)
				printf("%d\n",n);
		}
	}
//	other:
//	for(int x=1;;x++)
//	{
//		int n=x*x;
//		if(n<1000)
//			continue;
//		if(n>9999)
//			break;
//		int hi=n/100;
//		int lo=n%100;
//		if(hi/10==hi%10 && lo/10==lo%10)
//			printf("%d\n",n);
//	}
//	return 0;
}
