#include <stdio.h>
int main()
{
	double term=1;
	double sum=0;
	double i=1.0;
	double sym=1.0;
	while(term>1e-6)
	{
		term=1/i;
		sum=sum+sym*term;
		i=i+2; 
		sym=sym*(-1);
	}
	printf("%lf\n",sum);
	return 0;
	
//	standard:
//	double sum=0;
//	for(int i=0;;i++)
//	{
//		double term=1.0/(i*2+1);
//		if(i%2==0)
//			sum+=term;
//		else
//			sum-=term;
//		if(term<1e-6)
//			break; 
//	} 
//	printf("%.6f\n",sum);
//	return 0;
}
