#include <stdio.h>
int main()
{
    int n,i,first=0,second=1,fibo=0;
    scanf("%d",&n);
    printf("0 1");
    for(i=3;i<=n;i++)
    {
        fibo=first+second;
        first=second;
        second=fibo;
        printf(" %d",fibo);

    }
    printf("\n");
    return 0;
}
