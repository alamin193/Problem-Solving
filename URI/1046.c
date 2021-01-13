#include<stdio.h>
int main()
{
    int s, e,t,t1;
    scanf("%d %d",&s,&e);
    t=e-s;
    if(t==0)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");

    }
    else if(t<0)
    {
        t1=t+24;
        printf("O JOGO DUROU %d HORA(S)\n",t1);
    }
    else
    {
        printf("O JOGO DUROU %d HORA(S)\n",t);
    }
    return 0;
}
