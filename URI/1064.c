#include<stdio.h>
int main()
{
    float n,x,sum=0;
    int count=0;
    for(n=1;n<=6;n++)
    {
        scanf("%f",&x);
        if(x>0)
        {
            sum=sum+x;
            count++;
        }
    }
    printf("%d valores positivos\n",count);
    printf("%.1f",sum/count);
    return 0;
}


