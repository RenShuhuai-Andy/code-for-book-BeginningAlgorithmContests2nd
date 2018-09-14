#include <stdio.h>

//写法1
int sum(int* begin, int* end)
{
    int n=end-begin;
    int ans=0;
    for(int i=0;i<n;i++)
        ans+=begin[i];
    return ans;
}

//写法2
int sum(int* begin, int* end)
{
    int *p=begin;
    int ans=0;
    for(int *p=begin;p!=end;p++)
        ans+=*p;
    return ans;
}