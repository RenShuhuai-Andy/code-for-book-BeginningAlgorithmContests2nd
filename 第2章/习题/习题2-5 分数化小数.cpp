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
        printf ("%lld.",a/b);//������������ֺ�С����
        a %= b;//С������ֻ��a��b�������й� 
        for (int i = 1; i < c; i++)
        {
        	//��ȳ���������� 
            printf ("%lld",a*10/b);//��ӡ�� 
            a = a*10%b;//�õ����� 
        }
        if (a*10%b*10/b < 5)//����Ҫ��������һλ�����Ƿ��λ���ж�
            printf ("%lld",a*10/b);
        else
            printf ("%lld",a*10/b+1);
	}
	return 0;
}
