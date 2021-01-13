#include<stdio.h>
int main()
{
    int n[1000],i,j,m,count=0;
    scanf("%d",&m);
    for(i=0;i<1000;i++)
    {
        n[i]=count;
        count++;
        if(count==m)
            count=0;
    }
    for(i=0;i<1000;i++)
    {
        printf("N[%d] = %d\n",i,n[i]);
    }
    return 0;
}

