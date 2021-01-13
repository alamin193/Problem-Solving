#include<stdio.h>
int main()
{
    int h,s;
    double t;
    scanf("%d",&h);
    scanf("%d",&s);
    t=(h*s)/12.0;
    printf("%.3lf\n",t);
    return 0;
}
