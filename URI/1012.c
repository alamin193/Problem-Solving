#include<stdio.h>
int main()
{
    double x,y,z,a,b,c,d,e;
    scanf("%lf %lf %lf",&x,&y,&z);
    a=.50*x*z;
    b=3.14159*z*z;
    c=((x+y)/2)*z;
    d=y*y;
    e=x*y;
    printf("TRIANGULO: %.3lf\n",a);
    printf("CIRCULO: %.3lf\n",b);
    printf("TRAPEZIO: %.3lf\n",c);
    printf("QUADRADO: %.3lf\n",d);
    printf("RETANGULO: %.3lf\n",e);

    return 0;
}
