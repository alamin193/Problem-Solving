#include<stdio.h>
int main()
{
    int q,in;
    float price;
    scanf("%d %d",&in,&q);
    switch(in)
    {
    case 1:
        price=4.00*q;
        printf("Total: R$ %.2f\n",price);
        break;
    case 2:
        price=4.50*q;
        printf("Total: R$ %.2f\n",price);
        break;
    case 3:
        price=5.00*q;
        printf("Total: R$ %.2f\n",price);
        break;
    case 4:
        price=2.00*q;
        printf("Total: R$ %.2f\n",price);
        break;
    case 5:
        price=1.50*q;
        printf("Total: R$ %.2f\n",price);
        break;
    }
    return 0;
}
