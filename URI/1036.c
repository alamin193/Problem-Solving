#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d,d1,d2,d3;
    scanf("%lf %lf %lf",&a,&b,&c);
    d3=b*b-(4*a*c);
    if(d3<0||a==0)
        printf("Impossivel calcular\n");
    else
    {
        d=sqrt(d3);
        printf("R1 = %.5lf\n",(-b+d)/(2*a));
        printf("R2 = %.5lf\n",(-b-d)/(2*a));
    }
    return 0;

}
