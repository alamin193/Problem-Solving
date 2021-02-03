#include<stdio.h>
long long int Sum(long long int ar[],int size)
{
    long long int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=ar[i];
    }
    return sum;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    long long int num[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&num[i]);
    }
    printf("%lld\n",Sum(num,n));
    return 0;
}
