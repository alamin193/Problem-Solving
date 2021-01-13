#include<stdio.h>
int main()
{
    int i,n[100],max,pos;
    for(i=0; i<100; i++)
    {
        scanf("%d",&n[i]);
    }
    max=n[0];
    for(i=1; i<100; i++)
    {
        if(max<n[i])
        {
            max=n[i];
            pos=i+1;
        }
    }
    printf("%d\n",max);
    printf("%d\n",pos);
    return 0;
}
