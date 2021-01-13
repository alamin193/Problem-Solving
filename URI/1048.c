#include<stdio.h>
int main()
{
    double sl,in,t;
    int p;
    scanf("%lf",&sl);
    if(sl>=0&&sl<=400.00)
    {
        in=(sl/100)*15;
        t=in+sl;
        p=15;
    }
    else if(sl>=400.01&&sl<=800.00)
    {
        in=(sl/100)*12;
        t=in+sl;
        p=12;
    }
    else if(sl>=800.01&&sl<=1200.00)
    {
        in=(sl/100)*10;
        t=in+sl;
        p=10;
    }
    else if(sl>=1200.01&&sl<=2000.00)
    {
        in=(sl/100)*7;
        t=in+sl;
        p=7;
    }
    else
    {
        in=(sl/100)*4;
        t=in+sl;
        p=4;
    }
    printf("Novo salario: %.2lf\n",t);
    printf("Reajuste ganho: %.2lf\n",in);
    printf("Em percentual: %d %%\n",p);
    return 0;
}
