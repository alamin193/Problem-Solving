#include<stdio.h>
int main()
{
    int n,r,r1,r2,r3,r4,r5;
    scanf("%d",&n);
    printf("%d\n",n);
    printf("%d nota(s) de R$ 100,00\n",n/100);
    r=n%100;
    printf("%d nota(s) de R$ 50,00\n",r/50);
    r1=r%50;
    printf("%d nota(s) de R$ 20,00\n",r1/20);
    r2=r1%20;
    printf("%d nota(s) de R$ 10,00\n",r2/10);
    r3=r2%10;
    printf("%d nota(s) de R$ 5,00\n",r3/5);
    r4=r3%5;
    printf("%d nota(s) de R$ 2,00\n",r4/2);
    r5=r4%2;
    printf("%d nota(s) de R$ 1,00\n",r5);

    return 0;
}
