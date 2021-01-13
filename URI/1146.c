#include<stdio.h>
int main()
{
    int n,i;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        for(i=1;i<n;i++)
        {
            printf("%d ",i);
        }
        printf("%d",i);
        printf("\n");
    }

    return 0;
}
