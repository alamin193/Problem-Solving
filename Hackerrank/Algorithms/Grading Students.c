#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int marks[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&marks[i]);
    }
    for(i=0; i<n; i++)
    {
        if(marks[i]%5==3 && marks[i]>=38 )
        {
            marks[i]+=2;
        }
        else if(marks[i]%5==4 && marks[i]>=38)
        {
            marks[i]+=1;
        }
    }
    for(i=0; i<n; i++)
    {
        printf("%d\n",marks[i]);
    }

    return 0;
}
