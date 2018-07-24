#include <stdio.h>
int main()
{
	for(int k=123;k<=329;k++)
	{
		int abc=k;
		int def=2*k;
		int ghi=3*k;
		
		int a=abc/100;
		int b=abc/10%10;
		int c=abc%10;
		int d=def/100;
		int e=def/10%10;
		int f=def%10;
		int g=ghi/100;
		int h=ghi/10%10;
		int i=ghi%10;
		
		if(a+b+c+d+e+f+g+h+i==45)
			printf("%d %d %d\n",abc,def,ghi);
		else 
			continue;
	}
	return 0;
} 
