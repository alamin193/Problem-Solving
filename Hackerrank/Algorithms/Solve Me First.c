#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}
int main(){
    int a,b;
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);
    printf("%d\n",sum(a,b));
    return 0;
}
