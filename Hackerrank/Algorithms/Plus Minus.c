#include<stdio.h>
int main()
{
    int size,i,p=0,n=0,z=0;
    scanf("%d",&size);
    int num[size];

    for(i=0; i<size; i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0; i<size; i++)
    {
        if(num[i]==0)
        {
            z++;
        }
        else if(num[i]>0)
        {
            p++;
        }
        else
        {
            n++;
        }
    }
    printf("%f\n",(float)p/size);
    printf("%f\n",(float)n/size);
    printf("%f\n",(float)z/size);

    return 0;
}
