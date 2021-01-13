#include<stdio.h>
int main()
{
    float n,sum=0;
    int count=0,op;
    while(1)
    {
        while(count!=2)
        {
            scanf("%f",&n);
            if(n>=0&&n<=10)
            {
                sum=sum+n;
                count++;
            }
            else
                printf("nota invalida\n");
            if(count==2)
            {
                printf("media = %.2f\n",sum/count);
            }
        }
        count=0;
        sum=0;
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d",&op);
        while(op!=1&&op!=2)
        {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d",&op);
        }
        if(op==2)
            break;
        else
            continue;
    }
    return 0;
}
