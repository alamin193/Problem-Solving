#include<stdio.h>
int main()
{
    unsigned long long int a,b,c,t=0,s=0;
    scanf("%lld %lld %lld",&a,&b,&c);
    if(a%c==0)
    {
        t=a/c;
    }
    else
    {
        t=(a/c)+1;
    }
    if(b%c==0)
    {
        s=b/c;
    }
    else
    {
        s=(b/c)+1;
    }
    printf("%lld\n",t*s);
    return 0;
}
