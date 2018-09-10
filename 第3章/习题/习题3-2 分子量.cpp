#include <iostream>
#include <cstdio>
using namespace std;

const char name[] = "CHON";
double weight[] = {12.01, 1.008, 16.00, 14.01};

int main(void)
{
    int t;
    char s[81];

    cin >> t;
    while (t--) {
        scanf("%s", s);
        int num;
        double sum = 0;
        int i = 0;
        while (s[i]) 
        {
            int j;
            for (j = 0; j < 4; j ++) 
            {
                if (s[i] == name[j]) break;
            }
            i ++;
            num = 1;
            if (isdigit(s[i])) 
                num = (s[i++]-'0');
            if (isdigit(s[i])) 
                num = num*10 + (s[i++]-'0');
            sum += num * weight[j];
        }
        printf("%.3lf\n", sum);
    }
    return 0;
}


// WRONG
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <ctype.h>
// #define maxn 50
// char s[maxn];
// int main()
// {   
//     int T;
//     scanf("%d",&T);
//     while(T--)
//     {
//         memset(s,0,sizeof(s));
//         scanf("%s",s);
//         float mass=0.0;
//         float total_mass=0.0;
//         int digit=0;
//         int num=0;
//         for(int i=0;i<strlen(s);i++)
//         {
//             if(s[i]=='C')
//             {
//                 if(isalpha(s[i-1]))
//                     num=1;
//                 total_mass+=mass*num;
//                 mass=12.01;
//             }
//             else if(s[i]=='H')
//             {
//                 if(isalpha(s[i-1]))
//                     num=1;
//                 total_mass+=mass*num;
//                 mass=1.008;
//             }       
//             else if(s[i]=='O')
//             {
//                 if(isalpha(s[i-1]))
//                     num=1;
//                 total_mass+=mass*num;
//                 mass=16.00;
//             }          
//             else if(s[i]=='N')
//             {
//                 if(isalpha(s[i-1]))
//                     num=1;
//                 total_mass+=mass*num;
//                 mass=14.01;
//             }     
//             else if (isdigit(s[i]))
//             {
//                 if(isalpha(s[i-1]))
//                     digit=num=0;
//                 num=num*pow(10,digit)+(s[i]-'0');
//                 digit++;
//             }
//             if(strlen(s)==1)
//                 total_mass=mass;
//         }
//         printf("%.3f\n",total_mass);
//     }
//     return 0;
// }
