#include <stdio.h>
#include <string.h>
#define maxn 5
char grid[maxn][maxn];
int main()
{
    int i=0;
    int T=0;
    while((grid[0][0]=getchar())!='Z')
    {
        int x=0,y=0;//空格的坐标
        for(int i=0;i<maxn;i++)//读入网格中的字母
        {
            for(int j=0;j<maxn;j++)
            {
                if(!i && !j)//去掉grid[0][0]
                    continue;
                grid[i][j]=getchar();
                if(grid[i][j]==' ')//获取空格坐标
                {
                    y=i;
                    x=j;
                } 
            }
            getchar();//读取换行符
        }
        char c;
        bool leagal=true;
        while((c=getchar())!='0')//读入指令
        {
            int k=0;
            if(leagal==false || c=='\n')//就算非法也要把指令读完，指令中间可能有换行符
                continue;
            if(c=='A')
            {
                if(y==0)
                    leagal=false;
                else
                {
                    grid[y][x]=grid[y-1][x];
                    grid[y-1][x]=' ';
                    y--;
                }
            }
            else if(c=='B')
            {
                if(y==maxn-1)
                    leagal=false;
                else
                {
                    grid[y][x]=grid[y+1][x];
                    grid[y+1][x]=' ';
                    y++;
                }
            }
            else if(c=='L')
            {
                if(x==0)
                    leagal=false;
                else
                {
                    grid[y][x]=grid[y][x-1];
                    grid[y][x-1]=' ';
                    x--;
                }
            }
            else if(c=='R')
            {
                if(x==maxn-1)
                    leagal=false;
                else
                {
                    grid[y][x]=grid[y][x+1];
                    grid[y][x+1]=' ';
                    x++;
                }
            }
        }
        if(++T)
            printf("Puzzle #%d\n",T);
        if(leagal==false)
        {
            printf("This puzzle has no final configuration.\n");
            printf("\n");
        }
            
        else
        {
            for(int a=0;a<maxn;a++)
            {
                for(int b=0;b<maxn;b++)
                    printf("%c",grid[a][b]);
                printf("\n");
            }    
            printf("\n"); 
        }
    }
    return 0;
}