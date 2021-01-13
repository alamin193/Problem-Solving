#include<stdio.h>
int main()
{
    int n,i,j,a,b,sum=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d %d",&a,&b);
        if(a>b)
        {
            for(j=b+1; j<a; j++)
            {
                if(j%2!=0)
                {
                    sum=sum+j;
                }
            }
        }
        else
        {
            for(j=a+1; j<b; j++)
            {
                if(j%2!=0)
                {
                    sum=sum+j;
                }
            }
        }
        printf("%d\n",sum);
        sum=0;
    }

    return 0;
}
