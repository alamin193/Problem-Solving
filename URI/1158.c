#include <stdio.h>
int main()
{
    int i,j,n,y,x,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&x,&y);
        if(x%2==0)
        {
            x+=1;
        }
        for(j=x;j<=x+y*2-2;j+=2)
        {
            sum=sum+j;
        }
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}
