#include <stdio.h>
int main()
{
    int i,j,i1;
    double s=1;
    for(j=3,i=1; j<=39; i++,j+=2)
    {
        i1=i*2;
        s=s+(j/(float)(((float)i1/2)+1));
        i=i1;
    }
    printf("%.2lf\n",s);
    return 0;
}
