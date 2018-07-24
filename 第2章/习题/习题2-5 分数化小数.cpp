#include <stdio.h>
#include <math.h>
int main()
{
//	wrong:
//	long a=0,b=0;
//	int c=0,kase=0;
//	while((scanf("%ld%ld%d",&a,&b,&c))==3 && a && b && c)
//	{
//		double decimal;
//		decimal=((double)a)/((double)b);
//		printf("%lf\n",decimal);
//		decimal=((int)(decimal*pow(10,c)+0.5))/pow(10,c); 
//		kase++;
//		printf("Case %d: %lf\n",kase,decimal);
//	}

	long long a,b;
    int c;
    while (scanf ("%lld%lld%d",&a,&b,&c) == 3 && !(a == 0 && b == 0 && c == 0))
    {
        printf ("%lld.",a/b);//先输出整数部分和小数点
        a %= b;//小数部分只与a对b的余数有关 
        for (int i = 1; i < c; i++)
        {
        	//类比除法笔算过程 
            printf ("%lld",a*10/b);//打印商 
            a = a*10%b;//得到余数 
        }
        if (a*10%b*10/b < 5)//对需要输出的最后一位进行是否进位的判断
            printf ("%lld",a*10/b);
        else
            printf ("%lld",a*10/b+1);
	}
	return 0;
}
