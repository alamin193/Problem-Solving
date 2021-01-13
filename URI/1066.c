#include<stdio.h>
int main()
{
    int n,x;
    int even=0,odd=0,pos=0,neg=0;
    for(n=1;n<=5;n++)
    {
        scanf("%d",&x);
        if(x%2==0)
        {
            even++;
        }
        if(x%2!=0)
        {
            odd++;
        }
        if(x<0)
        {
            neg++;
        }
        if(x>0)
        {
            pos++;
        }
    }
    printf("%d valor(es) par(es)\n",even);
    printf("%d valor(es) impar(es)\n",odd);
    printf("%d valor(es) positivo(s)\n",pos);
    printf("%d valor(es) negativo(s)\n",neg);
    return 0;
}




