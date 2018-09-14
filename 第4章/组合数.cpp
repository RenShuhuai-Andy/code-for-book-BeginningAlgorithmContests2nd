long long C(int n,int m)
{
    if(m<n-m)
        m=n-m;//m与n-m对组合数公式是没影响的，但是把m换大可以使下面第一个for循环的乘积变小，避免中间结果溢出
    long long ans=1;
    for(int i=m+1;i<=n;i++)
        ans*=i;
    for(int i=1;i<=n-m;i++)
        ans/=i;
    return ans;
}