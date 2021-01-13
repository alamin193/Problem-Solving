#include<stdio.h>
int main()
{
    long long int a[60],x;
    int i,j,n;
    scanf("%d",&n);
    a[0]=0;
    a[1]=1;
    for(i=1; i<=n; i++)
    {

        scanf("%lld",&x);

        for(j=2; j<=x; j++)
        {
            a[j]=a[j-2]+a[j-1];

        }
        printf("Fib(%lld) = %lld\n",x,a[x]);
    }
    return 0;
}
