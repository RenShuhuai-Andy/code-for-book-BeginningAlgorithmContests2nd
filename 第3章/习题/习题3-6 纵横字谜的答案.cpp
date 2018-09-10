#include <stdio.h>
#include <string.h>
int main()
{
    int x,y;
    int T=1;//题号
    while(scanf("%d",&y)!=0)
    {
        scanf("%d",&x);
        char puzzle[y][x];//字谜
        int record[y][x];//每个方格的编号
        memset(puzzle,0,sizeof(puzzle));
        memset(record,0,sizeof(record));
        getchar();//读取换行符
        int n=1;//编号
        for(int i=0;i<y;i++)//读入字母
        {
            for(int j=0;j<x;j++)
            {
                puzzle[i][j]=getchar();
                if((i-1<0 || j-1<0 || puzzle[i-1][j]=='*' || puzzle[i][j-1]=='*') && puzzle[i][j]!='*')
                {
                    record[i][j]=n;
                    n++;
                }
            }
            getchar();
        }
        printf("puzzle #%d:\n",T);
        printf("Across");
        for(int i=0;i<y;i++)//遍历每行
        {
            int j=0;
            bool is_first=true;//是否是单词的第一个字母
            while(j<x)
            {
                if(puzzle[i][j]!='*')
                {
                    if(is_first)
                    {
                        printf("\n%3d.",record[i][j]);
                        is_first=false;
                    }
                    else
                        printf("%c",puzzle[i][j++]);
                }
                else if(puzzle[i][j+1]=='*')//跳过连续的*
                    j++;
                else
                {
                    is_first=true;
                    j++;
                }
            }
        }
        printf("\nDown");
        for(int j=0;j<x;j++)//遍历每列
        {    
            int i=0;
            bool is_first=true;//是否是单词的第一个字母
            while(i<y)
            {
                if(puzzle[i][j]!='*')
                {
                    if(is_first)
                    {
                        printf("\n%3d.",record[i][j]);
                        is_first=false;
                    }
                    else
                        printf("%c",puzzle[i++][j]);
                }
                else if(puzzle[i+1][j]=='*')//跳过连续的*
                    i++;
                else
                {
                    is_first=true;
                    i++;
                }
            }
        }
        printf("\n");
        T++;
    }
}