#include<stdio.h>
int main()
{
    float a,b,c,avg;
    int i,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%f %f %f",&a,&b,&c);
        avg=(a*2+b*3+c*5)/10;
        printf("%.1f\n",avg);
    }
    return 0;
}

