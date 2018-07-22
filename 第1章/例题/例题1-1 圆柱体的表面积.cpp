#include <stdio.h>
#include <math.h>
int main()
{
	const double pi=acos(-1.0);
	double r,h;
	scanf("%lf%lf",&r,&h);
	double area;
	area=2*pi*r*r+2*pi*r*h;
	printf("%.3f\n",area);
}
