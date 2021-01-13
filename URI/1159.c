#include <stdio.h>
int main()
{
    int j,x,sum=0;
    while(1)
    {
        scanf("%d",&x);
        if(x==0)
        {
            break;
        }
        if(x%2!=0)
        {
            x+=1;
        }
        for(j=x;j<=x+5*2-2;j+=2)
        {
            sum=sum+j;
        }
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}

