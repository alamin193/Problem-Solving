#include<stdio.h>
int main()
{
    int n,i,j,count=1;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i==1||j==1||i==n||j==n)
            {
                printf("%d ",count);
            }
            if(i==2||j==2||i==n-1||j==n-1)
            {
                printf("%d ",count);
            }
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
