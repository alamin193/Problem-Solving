#include<stdio.h>
int main()
{
    float a,b,c,p,area,max,min1,min2;
    scanf("%f %f %f",&a,&b,&c);
    if(a<c+b&&b<a+c&&c<a+b)
    {
        printf("Perimetro = %.1f\n",a+b+c);
    }
    else
    {
        area=((a+b)/2)*c;
        printf("Area = %.1f\n",area);
    }
    return 0;
}
