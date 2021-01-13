#include<stdio.h>
int main()
{
    int n,i,i1,i2;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        i1=i*i;
        i2=i1*i;
        printf("%d %d %d\n",i,i1,i2);
    }
    return 0;
}

