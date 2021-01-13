#include<stdio.h>
int main()
{
    int n[10],i,v;
    scanf("%d",&v);
    n[0]=v;
    for(i=1; i<10; i++)
    {
        v=v*2;
        n[i]=v;


    }
    for(i=0; i<10; i++)
    {
        printf("N[%d] = %d\n",i,n[i]);
    }
    return 0;
}

