#include<stdio.h>
int main()
{
    int em,h;
    float sl,to;
    scanf("%d",&em);
    scanf("%d",&h);
    scanf("%f",&sl);
    to=h*sl;
    printf("NUMBER = %d\n",em);
    printf("SALARY = U$ %.2f\n",to);
    return 0;
}
