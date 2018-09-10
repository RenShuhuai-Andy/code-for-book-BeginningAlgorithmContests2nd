#include <stdio.h>
#include <math.h>
#define maxn 10
int a[maxn]; 
int main(int argc, char const *argv[])
{
	
	int x,n=0;
//	while(scanf("%d",&x)==1)
//		a[n++]=x;
	for(int i=0;i<maxn;i++)
	{
		a[i]=i;
		printf("%d ",a[i]);
	}
	return 0;
//	double i;
//	for(i=0;i!=10;i+=0.1)
//		printf("%.1f\n",i);
//	return 0;
}
