#include<stdio.h>
int main()
{
    int i,l,n;
    scanf("%d %d",&l,&n);
    for(i=1; i<=n; i++)
    {
        if(i%l==0)
        {
            printf("%d\n",i);
        }
        else
        {
            printf("%d ",i);
        }
    }
    return 0;
}

