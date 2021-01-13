#include<stdio.h>
int main()
{
    int d,y,y1,m,m1;
    scanf("%d",&d);
    y=d/365;
    y1=d%365;
    m=y1/30;
    m1=y1%30;
    printf("%d ano(s)\n",y);
    printf("%d mes(es)\n",m);
    printf("%d dia(s)\n",m1);

    return 0;

}
