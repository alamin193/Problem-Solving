#include<stdio.h>
int main()
{
    int n,i,max,count=0;
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    max=num[0];
    for(i=1;i<n;i++)
    {
        if(max<num[i])
        {
            max=num[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(max==num[i])
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
