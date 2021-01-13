#include<stdio.h>
int main()
{
    float n,x;
    int count=0;
    for(n=1;n<=6;n++)
    {
        scanf("%f",&x);
        if(x>0)
        {
            count++;
        }
    }
    printf("%d valores positivos\n",count);
    return 0;
}


