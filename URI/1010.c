#include<stdio.h>
int main()
{
    int se,quan,se1,quan1;
    float price,price1,total;
    scanf("%d %d %f",&se,&quan,&price);
    scanf("%d %d %f",&se1,&quan1,&price1);
    total=quan*price+quan1*price1;
    printf("VALOR A PAGAR: R$ %.2f\n",total);
    return 0;
}
