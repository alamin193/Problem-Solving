#include<stdio.h>
int main()
{
    int n,i,j,sum1=0,sum2=0;
    scanf("%d",&n);
    int num[n][n];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&num[i][j]);
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i==j)
            {
                sum1+=num[i][j];
            }
            if((i+j)==(n-1))
            {
                sum2+=num[i][j];
            }
        }

    }
    printf("%d\n",abs(sum1-sum2));

    return 0;
}
