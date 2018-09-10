#include <stdio.h>
#include <string.h>
#define maxn 1010
int a[maxn];
int main()
{
	int n,k,first=1;//n盏灯，k个人 
	memset(a,0,sizeof(a));//0代表关，1代表开 
	scanf("%d%d",&n,&k);
	for(int i=1;i<=k;i++)//i代表人 
		for(int j=1;j<=n;j++)//j代表灯
			if(j%i==0) a[j]=!a[j];
	for(int i=1;i<=n;i++)//遍历所有灯 
		if(a[i]) 
		{
			if(first)
				first=0;
			else
				printf(" ");
			printf("%d",i);				
		}
	printf("\n");
	return 0;
}
