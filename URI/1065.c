#include<stdio.h>
int main()
{
    int n,x;
    int count=0;
    for(n=1;n<=5;n++)
    {
        scanf("%d",&x);
        if(x%2==0)
        {
            count++;
        }
    }
    printf("%d valores pares\n",count);
    return 0;
}



