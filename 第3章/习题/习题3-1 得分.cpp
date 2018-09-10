#include <stdio.h>
#include <string.h>
#define maxn 85
char s[maxn];
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        memset(s,0,sizeof(s));
        int O_nums=1;
        scanf("%s",s);
        int score=0;
        for(int i=0;i<strlen(s);i++)
        {
            if(s[i]=='O')
            {
                score+=O_nums;
                O_nums++;
            }
            else
                O_nums=1;
        }
        printf("%d\n",score);
    }
    return 0;
}
