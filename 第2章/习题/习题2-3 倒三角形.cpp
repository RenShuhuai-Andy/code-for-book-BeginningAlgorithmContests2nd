#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int space=0;
	for(int i=0;i<n;i++)
	{
		for(int k=0;k<space;k++)
			printf(" ");
		for(int j=0;j<2*(n-i)-1;j++)
			printf("#");
		space++; 
		printf("\n");
	} 
	return 0;
} 
