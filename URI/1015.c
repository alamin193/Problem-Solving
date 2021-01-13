#include<stdio.h>
#include<math.h>
int main()
{
    double x,x1,y,y1,d;
    scanf("%lf %lf",&x,&y);
    scanf("%lf %lf",&x1,&y1);
    d=sqrt((x1-x)*(x1-x)+(y1-y)*(y1-y));
    printf("%.4lf\n",d);
    return 0;
}
