#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    if(n%2==0)
    {
        n+=1;
        for(i=n; i<=n+10; i+=2)
        {
            printf("%d\n",i);

        }
    }
    else
    {
        for(i=n; i<=n+10; i+=2)
        {
            printf("%d\n",i);

        }
    }
    return 0;
}

