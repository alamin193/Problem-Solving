#include<stdio.h>
int main()
{
   int n,i,x,j,count=0;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       scanf("%d",&x);
       for(j=2;j<x;j++)
       {
           if(x%j==0)
           {
               count++;
           }
           if(count==1)
               break;
       }
       if(count==1)
        printf("%d nao eh primo\n",x);
       else
        printf("%d eh primo\n",x);
        count=0;
   }

    return 0;
}
