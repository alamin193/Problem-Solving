
#include<stdio.h>
int main()
{
    int a[3],b[3],a_c=0,b_c=0;
    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    scanf("%d %d %d",&b[0],&b[1],&b[2]);
    for(int i=0,j=0; i<3,j<3; i++,j++)
    {
        if(a[i]>b[j])
        {
            a_c++;
        }
        else if(a[i]<b[j])
        {
            b_c++;
        }
    }


    printf("%d %d\n",a_c,b_c);
    return 0;
}
