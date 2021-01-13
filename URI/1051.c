#include<stdio.h>
int main()
{
    double n,tax,tax1,tax2,t,t1,t2;
    scanf("%lf",&n);
    if(n>=0.00&&n<=2000.00)
    {
        printf("Isento\n");
    }
    else if(n>=2000.01&&n<=3000.00)
    {
        t=n-2000.00;
        tax=(t/100)*8;
        printf("R$ %.2lf\n",tax);
    }
    else if(n>=3000.01&&n<=4500.00)
    {
        t=n-2000.00;
        t1=t-1000;
        tax1=(t1/100)*18;
        tax2=(1000/100)*8;
        printf("R$ %.2lf\n",tax1+tax2);
    }
    else
    {
        t=n-2000.00;
        t1=t-1000;
        t2=t1-1500;
        tax1=(t2/100)*28;
        tax2=(1000/100.00)*8;
        tax=(1500.00/100)*18;
        printf("R$ %.2lf\n",tax1+tax2+tax);
    }
    return 0;
}

