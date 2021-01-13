#include<stdio.h>
int main()
{
    double m[12][12],sum=0;
    int i,j,so;
    char c[2];
    scanf("%d",&so);
    scanf("%s",&c[0]);
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%lf",&m[i][j]);

            if(so==i)
                sum=sum+m[i][j];
        }
    }

    if(c[0]=='S')
    {
        printf("%.1lf\n",sum);
    }
    else if(c[0]=='M')
    {
        printf("%.1lf\n",sum/12);
    }

    return 0;
}
