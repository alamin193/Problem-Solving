#include<stdio.h>
int main()
{
    int n[1000],x,i,min,pos;
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        scanf("%d",&n[i]);
    }
    min=n[0];
    for(i=1;i<x;i++)
    {
        if(min>n[i])
        {
            min=n[i];
            pos=i;
        }
    }
    printf("Menor valor: %d\n",min);
    printf("Posicao: %d\n",pos);
    return 0;
}
