#include<stdio.h>
int main()
{
    int n,l;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        l=n-i-1;
        for(int s=0; s<l; s++)
        {
            printf(" ");
        }
        for(int j=l; j<n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
