#include<stdio.h>
int main()
{
    char in;
    int i,n,x,csum=0,ssum=0,rsum=0,sum;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d %c",&x,&in);
        if(in=='C')
        {
            csum=csum+x;
        }
        else if(in=='S')
        {
            ssum=ssum+x;
        }
        else if(in=='R')
        {
            rsum=rsum+x;
        }

    }
    sum=ssum+csum+rsum;
    printf("Total: %d cobaias\n",sum);
    printf("Total de coelhos: %d\n",csum);
    printf("Total de ratos: %d\n",rsum);
    printf("Total de sapos: %d\n",ssum);
    printf("Percentual de coelhos: %.2f %%\n",((float)csum/sum)*100);
    printf("Percentual de ratos: %.2f %%\n",((float)rsum/sum)*100);
    printf("Percentual de sapos: %.2f %%\n",((float)ssum/sum)*100);
    return 0;
}
