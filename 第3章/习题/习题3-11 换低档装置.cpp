#include <stdio.h>
#include <string.h>
#define maxn 110
#define REDIRECT
char master_sec[maxn];
char driven_sec[maxn];
int main()
{
    #ifdef REDIRECT
        freopen("./3_11_input.txt","r",stdin);
        freopen("./3_11_output.txt","w",stdout);
    #endif
    while(scanf("%s%s",master_sec,driven_sec)!=EOF)
    {
        bool match;
        int i=0;
        bool find_on_head=false;
        int container_l=0;
        int container_l_2=0;
        //先考虑driven_sec从master_sec左侧凸出的情况
        for(i=0;i<strlen(master_sec);i++)//i代表开始匹配的位置
        {
            match=true;
            int j=strlen(driven_sec)-1;//j是driven_sec中数字的索引
            if(j-i>=0)
            {
                for(j=strlen(driven_sec)-1;j>=0;j--)
                    if(driven_sec[j]+master_sec[j-i]-2*'0'>3)
                    {
                        match=false;
                        break;
                    }
            }
            if(match)
            {
                find_on_head=true;
                break;
            }
        }
        if(find_on_head)
            container_l=i+strlen(master_sec);
        //考虑driven_sec不凸出和driven_sec从master_sec右侧凸出的情况
		for(i=0;i<strlen(master_sec);i++)
        {
            match=true; 
			for(int j=0;j<strlen(driven_sec);j++)
                if(driven_sec[j]+master_sec[i+j]-2*'0'>3)//定义的数据类型是char，要减掉'0' 
                {
                    match=false;
                    break;
                }
            if(match)
                break;
        }
        if(match)
        {
            if(i>strlen(master_sec))//此时i已到匹配结束的位置
                container_l_2=i+strlen(driven_sec);
            else
                container_l_2=strlen(master_sec);
            printf("%d\n",container_l<container_l_2 ? container_l : container_l_2);
        }
        else
            printf("%d\n",strlen(master_sec)+strlen(driven_sec));
    }
}
