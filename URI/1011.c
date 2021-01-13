#include<stdio.h>
int main()
{
    double pi=3.14159,r,value;
    scanf("%lf",&r);
    value=(4.0/3)*pi*(r*r*r);
    printf("VOLUME = %.3lf\n",value);
    return 0;
}
