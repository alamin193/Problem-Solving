#include<stdio.h>
int sum(int arr[],int size)
{
    int s=0;
    for(int i=0;i<size;i++)
    {
        s=s+arr[i];

    }
    return s;
}
int main()
{
    int n,i=0;
    scanf("%d",&n);
    int num[n];
    while(i<n)
    {
        scanf("%d",&num[i]);
        i++;
    }

    printf("%d\n",sum(num,n));
}
