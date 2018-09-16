#include <stdio.h>
#include <string.h>
#define maxm 50//序列数
#define maxn 1000//序列长度
char DNA[maxm][maxn];
char consensus_s[maxm];
char nucleotides_num[4];//存每列中四个碱基的个数
const char nucleotides_c[4]={'A','C','G','T'};//按字母表顺序排好

char find_consensus_c(char* num)
{
    char consensus_c=nucleotides_c[0];
    int max=num[0];
    for(int i=0;i<3;i++)
        if(num[i+1]>max)
        {
            consensus_c=nucleotides_c[i+1];
            max=num[i+1];
        }
    return consensus_c;
}

int main()
{
    int T,m,n;
    scanf("%d",&T);
    while(T--)
    {
        getchar();
        memset(DNA,0,sizeof(DNA));
        memset(consensus_s,0,sizeof(consensus_s));
        scanf("%d%d",&m,&n);
        getchar();
        for(int i=0;i<m;i++)
            scanf("%s",DNA[i]);
        int hamming_d=0;//海明距离
        for(int i=0;i<n;i++)//遍历每列
        {
            memset(nucleotides_num,0,sizeof(nucleotides_num));
            for(int j=0;j<m;j++)
            {
                switch(DNA[j][i])//统计每一列四个碱基的个数
                {
                    case 'A': nucleotides_num[0]++;break;
                    case 'C': nucleotides_num[1]++;break;
                    case 'G': nucleotides_num[2]++;break;
                    case 'T': nucleotides_num[3]++;break;
                }
            }
            consensus_s[i]=find_consensus_c(nucleotides_num);//找到每列中个数最多的碱基
            switch(consensus_s[i])
            {
                case 'A': hamming_d+=nucleotides_num[1]+nucleotides_num[2]+nucleotides_num[3];break;
                case 'C': hamming_d+=nucleotides_num[0]+nucleotides_num[2]+nucleotides_num[3];break;
                case 'G': hamming_d+=nucleotides_num[0]+nucleotides_num[1]+nucleotides_num[3];break;
                case 'T': hamming_d+=nucleotides_num[0]+nucleotides_num[1]+nucleotides_num[2];break;
            }
        }
        for(int i=0;i<n;i++)
            printf("%c",consensus_s[i]);
        printf("\n%d\n",hamming_d);
    }
    return 0;
}
