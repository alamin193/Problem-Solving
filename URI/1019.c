#include<stdio.h>
int main()
{
    int n,h,h1,m,m1;
    scanf("%d",&n);
    h=n/3600;
    h1=n%3600;
    m=h1/60;
    m1=h1%60;
    printf("%d:%d:%d\n",h,m,m1);
    return 0;

}
