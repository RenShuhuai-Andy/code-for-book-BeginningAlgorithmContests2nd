#include <stdio.h>
#include <string.h>
#define REDIRECT
int length[12];//存边长
int main()
{
    #ifdef REDIRECT
        freopen("./3_10_input.txt","r",stdin);
        freopen("./3_10_output.txt","w",stdout);
    #endif
    int w,h;//分别代表木板的宽和长
    memset(length,0,sizeof(12));
    while(scanf("%d%d",&w,&h)!=EOF)
    {
        length[0]=w,length[1]=h;
        for(int i=1;i<6;i++)//读入12个边长
        {
            scanf("%d%d",&length[2*i],&length[2*i+1]);
        }
        int tem=0;
        for(int i=0;i<6;i++)
        {
            if(length[2*i+1]>length[2*i])
            {
                tem=length[2*i+1];
                length[2*i+1]=length[2*i];
                length[2*i]=tem;
            }
        }
        bool is_possible, has_two_square;
        for(int i=0;i<6;i++)//遍历每一块木板的长宽
        {
            if(length[i*2]!=-1 && length[i*2+1]!=-2)
            {
                is_possible=false;
                has_two_square=false;
                for(int j=i+1;j<6;j++)//找剩下的木板当中是否有一块与其匹配，有则将找到木板对应的数组置为-1，无则说明失败
                {
                    if(length[j*2]==length[i*2] && length[j*2+1]==length[i*2+1])
                    {
                        length[j*2]=-1;
                        length[j*2+1]=-2;
                        is_possible=true;
                        break;
                    }
                    if(length[j*2]==length[j*2+1] && length[i*2]==length[i*2+1] && length[j*2]!=length[i*2])//如果有两块边长不等的正方形木板，也失败
                    {
                        has_two_square=true;
                        break;
                    }
                }
                if(!is_possible)
                    break;
                if(has_two_square)
                    break;
            }
        }
        if(is_possible && !has_two_square)
            printf("POSSIBLE\n");
        else
            printf("IMPOSSIBLE\n");
        memset(length,0,sizeof(12));
    }
    return 0;
}

//坑：不能对12个边长排序，然后每4个相等就成功，因为可能有正方形的存在
