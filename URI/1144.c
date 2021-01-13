#include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        k=i*i;
        j=k*i;
        printf("%d %d %d\n",i,k,j);
        printf("%d %d %d\n",i,k+1,j+1);

    }
    return 0;
}
