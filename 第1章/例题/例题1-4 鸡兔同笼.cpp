#include <stdio.h>
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int hen,rabbit;
//  wrong
//	if((m-2*n)%2==0)
//		rabbit=(m-2*n)/2;
//	else 
//	{
//		printf("No answer\n");
//		return 0;
//	}
//	if((4*n-m)%2==0)
//		hen=(4*n-m)/2;
//	else
//	{
//		printf("No answer\n");
//		return 0;
//	}
	hen=(4*n-m)/2;
	rabbit=(m-2*n)/2;
	if( (m-2*n)%2==1 || (4*n-m)%2==1 || hen<0 || rabbit<0 )
		printf("No answer\n");
	else 
		printf("%d %d\n",hen,rabbit);
	return 0;
	
} 
