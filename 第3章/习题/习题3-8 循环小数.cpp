#include <stdio.h>
#include <string.h>
#define maxn 3000
int decimal_s[maxn];
int dividend_s[maxn];//保存中间步骤中的被除数
int main()
{
    #ifdef REDIRECT
        freopen("./3_8_input.txt","r",stdin);
        freopen("./3_8_output.txt","w",stdout);
    #endif
    int numerator;//分子
    int denominator;//分母
    while(scanf("%d%d",&numerator,&denominator)!=EOF)
    {
        int quotient=numerator/denominator;//商
        int dividend=numerator;//中间步骤中的被除数
        memset(decimal_s,-1,sizeof(decimal_s));
        memset(dividend_s,-1,sizeof(dividend_s));
        printf("%d/%d = %d.",numerator,denominator,quotient);//quotient是整数部分
        bool find_cycle=false;
        int i=0;//循环结束的索引
        int j=0;//循环开始的索引
        int cycle_length=0;//循环长度
        for(i=0;i<maxn;i++)//计算小数部分
        {
            dividend=(dividend-denominator*quotient)*10;
            for(j=0;j<i;j++)
            {
                if(dividend_s[j]==dividend)//出现循环，j为循环开始的索引，i为循环结束的索引
                {
                    find_cycle=true;
                    cycle_length=i-j;//循环长度
                    break;
                }
            }
            if(find_cycle)
                break;
            else
                dividend_s[i]=dividend;
            quotient=decimal_s[i]=dividend/denominator;
        }

        for(int k=0;k<j;k++)
            printf("%d",decimal_s[k]);//打印循环体前的数
        printf("(");
        if(find_cycle && cycle_length<=50)
        {
            for(int k=j;k<i;k++)
                printf("%d",decimal_s[k]);//打印循环体
            printf(")\n");    
            printf("   %d = number of digits in repeating cycle\n",cycle_length);
        }
        else if(find_cycle)
        {
            for(int k=j;k<50;k++)
                printf("%d",decimal_s[k]);//打印循环体
            printf("...)\n");
            printf("   %d = number of digits in repeating cycle\n",cycle_length);
        }
        printf("\n");
    }
    return 0;
}