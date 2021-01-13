#include<stdio.h>
int main()
{
    int ai,bg,i=0,g=0,d=0,op;
    while(1)
    {
            scanf("%d %d",&ai,&bg);
            if(ai>bg)
            {
                i++;
            }
            else if(ai<bg)
            {
                g++;
            }
            else
            {
                d++;
            }
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&op);
        while(op!=1&&op!=2)
        {
            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d",&op);
        }
        if(op==2)
            break;
        else
            continue;
    }
    printf("%d grenais\n",i+g+d);
    printf("Inter:%d\n",i);
    printf("Gremio:%d\n",g);
    printf("Empates:%d\n",d);
    if(i>g)
    {
        printf("Inter venceu mais\n");
    }
    else if(i<g)
    {
        printf("Gremio venceu mais\n");
    }
    else
        printf("Não houve vencedor\n");
    return 0;
}

