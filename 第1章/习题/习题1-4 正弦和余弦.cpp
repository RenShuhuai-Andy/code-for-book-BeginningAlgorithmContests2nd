#include <stdio.h>
#include <math.h>
int main()
{
	const double pi=acos(-1.0);
	int n;
	scanf("%d",&n);
	if(n>0 && n<360)
	printf("%f %f\n",sin(n/180.0*pi),cos(n/180.0*pi));
	return 0;
} 
