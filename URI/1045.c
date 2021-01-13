#include<stdio.h>
int main()
{
    double x,y,z,a,b,c;
    scanf("%lf %lf %lf",&x,&y,&z);
    if(x>y&&x>z)
    {
        a=x;
        if(y>z)
        {
            b=y;
            c=z;
        }
        else
        {
            b=z;
            c=y;
        }
    }
    else if(y>x&&y>z)
    {
        a=y;
        if(x>z)
        {
            b=x;
            c=z;
        }
        else
        {
            b=z;
            c=x;
        }
    }
    else
    {
        a=z;
        if(x>y)
        {
            b=x;
            c=y;
        }
        else
        {
            b=y;
            c=x;
        }
    }
    if(a>=b+c)
        printf("NAO FORMA TRIANGULO\n");
    else if(a*a==b*b+c*c)
        printf("TRIANGULO RETANGULO\n");
    else if(a*a>b*b+c*c)
        printf("TRIANGULO OBTUSANGULO\n");
    else if(a*a<b*b+c*c)
        printf("TRIANGULO ACUTANGULO\n");
    if(a==c&&a==b&&c==b)
        printf("TRIANGULO EQUILATERO\n");
    else if(a==c||a==b||c==b)
        printf("TRIANGULO ISOSCELES\n");
    return 0;
}
