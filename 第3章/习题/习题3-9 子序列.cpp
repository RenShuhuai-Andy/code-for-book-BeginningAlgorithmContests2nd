#include <stdio.h>
#include <string.h>
#define maxn 3000
char s[maxn];
char t[maxn];
int main()
{
    #ifdef REDIRECT
        freopen("./3_9_input.txt","r",stdin);
        freopen("./3_9_output.txt","w",stdout);
    #endif
    memset(s,0,sizeof(s));
    memset(t,0,sizeof(t));
	while(scanf("%s",s)!=EOF && scanf("%s",t)!=EOF)
    {
        bool is_subsequence=true;
        int j=0;//t的索引变量
        for(int i=0;i<strlen(s);i++)//遍历子串s
        {
            while(t[j++]!=s[i]){}
            if(j>strlen(t))
            {
                is_subsequence=false;
                break;
            }
        }
        if(is_subsequence)
            printf("Yes\n");
        else
            printf("No\n");
    	memset(s,0,sizeof(s));
        memset(t,0,sizeof(t));
	}
    return 0;
}
