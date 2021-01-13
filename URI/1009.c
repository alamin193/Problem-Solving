
#include<stdio.h>
int main()
{
    char emn;
    double sl,sell,stotal,total;
    scanf("%s",&emn);
    scanf("%lf",&sl);
    scanf("%lf",&sell);
    stotal=(sell/100)*15;
    total=sl+stotal;
    printf("TOTAL = R$ %.2lf\n",total);
    return 0;
}
