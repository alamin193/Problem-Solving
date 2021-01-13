#include<stdio.h>
int main()
{
    double n;
    int t,r,r1,r2,r3,r4,r5,r6,r7,r8,r9,r10;
    scanf("%lf",&n);
    t=n*100;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",t/10000);
    r=t%10000;
    printf("%d nota(s) de R$ 50.00\n",r/5000);
    r1=r%5000;
    printf("%d nota(s) de R$ 20.00\n",r1/2000);
    r2=r1%2000;
    printf("%d nota(s) de R$ 10.00\n",r2/1000);
    r3=r2%1000;
    printf("%d nota(s) de R$ 5.00\n",r3/500);
    r4=r3%500;
    printf("%d nota(s) de R$ 2.00\n",r4/200);
    r5=r4%200;
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",r5/100);
    r6=r5%100;
    printf("%d moeda(s) de R$ 0.50\n",r6/50);
    r7=r6%50;
    printf("%d moeda(s) de R$ 0.25\n",r7/25);
    r8=r7%25;
    printf("%d moeda(s) de R$ 0.10\n",r8/10);
    r9=r8%10;
    printf("%d moeda(s) de R$ 0.05\n",r9/5);
    r10=r9%5;
    printf("%d moeda(s) de R$ 0.01\n",r10);
    return 0;
}
