#include <stdio.h>
#include <string.h>
int counts[10];//记录每个数字出现的次数
int main()
{
    int T=0;
    scanf("%d",&T);
    while(T--)
    {
        int N;
        scanf("%d",&N);
        int num=0;
        memset(counts,0,sizeof(counts));
        int d;
        for(int i=1;i<=N;i++)
        {
            d=i;
            while(d>0)
            {
                counts[d%10]+=1;
                d/=10;
            }
        }
        for(int i=0;i<9;i++)
            printf("%d ",counts[i]);
        printf("%d\n",counts[9]);
    }
    return 0;
}