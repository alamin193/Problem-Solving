#include<stdio.h>
int main()
{
    unsigned long long int arr[5],sum=0,max=0,min=0;
    scanf("%llu %llu %llu %llu %llu",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);

    max=arr[1]+arr[2]+arr[3]+arr[4];
    min=arr[1]+arr[2]+arr[3]+arr[4];
    for(int i=1; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(i==j)
            {
                continue;
            }
            else
            {
                sum+=arr[j];
            }
        }
        if(max<sum)
        {
            max=sum;
        }
        else if(min>sum)
        {
            min=sum;
        }
        sum=0;
    }
    printf("%llu %llu\n",min,max);

    return 0;
}
