#include <stdio.h>
#include <math.h>
int is_prime(int n)
{
    //0代表不是素数，1代表是素数
    if(n<=1)
        return 0;
    int m=floor(sqrt(n)+0.5);
    for(int i=2;i<=m;i++)
        if(n%i==0)
            return 0;
    return 1;
}