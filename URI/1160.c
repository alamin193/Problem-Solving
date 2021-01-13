#include<stdio.h>
int main()
{
    int a,b,n,i,count=0;
    double r1,r2;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d %d %lf %lf",&a,&b,&r1,&r2);
        while(a<=b)
        {

            a=a+(r1/100)*a;
            b=b+(r2/100)*b;
            count++;
            if(count>100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }


        }

        if(count<=100)
        printf("%d anos.\n",count);
        count=0;
    }

    return 0;
}
