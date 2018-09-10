#include <stdio.h>
#include <stdlib.h>
#define maxn 10
int nums[maxn];
int task1()
{
    int n=0;
    int a=0;
    while(scanf("%d",&a)==1)
        n++;
    printf("%d",n);
    return 0;
}

int task2()
{
    int max=-10000,min=10000;
    int a=0,n=0;
    float sum=0.0;
    while(scanf("%d",&a)==1)
    {
        if(a>max)
            max=a;
        if(a<=min)
            min=a;
        sum+=a;
        n++;
    }
    printf("max:%d,min:%d,ave:%.2f",max,min,sum/n);
    return 0;
}

int task3()
{
    int a=0;
    int n=0;
    int d=1000;
    int n1,n2;
    while(scanf("%d",&a)==1)
        nums[n++]=a;
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(abs(nums[i]-nums[j])<d)
            {
                d=abs(nums[i]-nums[j]);
                n1=nums[i];
                n2=nums[j];
            }      
    printf("two nearest num: %d,%d; distance:%d",n1,n2,d);
    return 0;
}

int task4()
{
    int a;
    int max=-10000;
    int second_max=-10000;
    while(scanf("%d",&a)==1)
    {
        if(a>max)
            max=a;
        if(a<max && a>second_max)
            second_max=a;
    }
    printf("seond max:%d",second_max);
}

int task5()
{
    int a;
    int n=0;
    float sum=0.0;
    while(scanf("%d",&a)==1)
    {
        nums[n++]=a;
        sum+=a;
    }
    float ave=sum/n;
    float var=0.0;
    for(int i=0;i<n;i++)
        var+=(nums[i]-ave)*(nums[i]-ave)/float(n);
    printf("varience: %.2f",var);
    return 0;
}

int task6()
{
    int a;
    int n=0;
    float sum=0.0;
    while(scanf("%d",&a)==1)
    {
        nums[n++]=a;
        sum+=a;
    }
    float ave=sum/n;
    int i=0;
    if(nums[i]<=ave)
        printf("%d",nums[i]);
    for(i=1;i<n;i++)
        if(nums[i]<=ave)
            printf(" %d",nums[i]);
    printf("\n");
    return 0;
}

int main()
{
    // task1();
    // task2();
    // task3();
    // task4();
    // task5();
    task6();
    return 0;
}

