// WRONG
// #include <stdio.h>
// #include <string.h>
// #define maxn 85
// char s[maxn];
// char periodic_s[maxn];//子串
// int main()
// {
//     int T;
//     scanf("%d",&T);
//     while(T--)
//     {
//         memset(s,0,sizeof(s));
//         memset(periodic_s,0,sizeof(periodic_s));
//         scanf("%s",s);
//         int k=0;//周期
//         int i=0;
//         while(s[i])
//         {   
//             periodic_s[i]=s[i];
//             periodic_s[i+1]='\0';
//             k++;
//             if(s[i+1]==s[0] && i>0)
//             {
//                 int find_out=1;
//                 for(int j=0;j<k;j++)
//                 {
//                     if(periodic_s[j]!=s[j+i+1])
//                     {
//                         find_out=0;
//                         break;
//                     }
//                 }
//                 if(find_out)
//                     break;
//             }
//             i++;
//         }
//         printf("%d\n",k);
//     }
//     return 0;
// }

//其他方法
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;

int main(void)
{
    int t;
    char s[81];

    cin >> t;
    while (t --) {
        scanf("%s", s);
        int i;//周期
        int n = strlen(s);
        for (i = 1; i <= n; i ++) 
        {
            if (n % i) 
                continue;//i若不能整除n，则i一定不是周期
            bool flag = true;
            for (int j = 1; j < n/i; j ++)//n/i代表周期的个数，即整个字符串可以分为n/i段，每一段都要保证相同
            {
                for (int k = 0; k < i; k ++)//遍历一个周期内的所有字符 
                {
                    if (s[k] != s[k+j*i]) 
                    {
                        flag = false; 
                        break;
                    }
                }
                if (flag == false) 
                    break;
            }
            if (flag == true) 
                break;
        }
        printf("%d\n", i);
        if (t) 
            printf("\n");
    }
    return 0;
}
