#include<stdio.h>
int main()
{
    int x,y,i,count=0,sum=0;
    scanf("%d",&x);
    scanf("%d",&y);
    while(x>=y)
    {
        scanf("%d",&y);
    }
   for(i=x;;i++)
   {
        sum=sum+i;
        count++;
        if(sum>y)
            break;
   }
    printf("%d\n",count);
    return 0;
}
