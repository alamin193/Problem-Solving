#include<stdio.h>
int main()
{
    int d,h,m,s,d1,h1,m1,s1,kd,kh,km,ks;
    char s2[10];
    scanf("%s %d",&s2,&d);
    scanf("%d : %d : %d",&h,&m,&s);
    scanf("%s %d",&s2,&d1);
    scanf("%d : %d : %d",&h1,&m1,&s1);
    kd=d1-d;
    kh=h1-h;
    km=m1-m;
    ks=s1-s;
    if(kh<0)
    {
        kh=kh+24;
        kd=kd-1;
    }
    if(km<0)
    {
        km=km+60;
        kh=kh-1;
    }
    if(ks<0)
    {
        ks=ks+60;
        km=km-1;
    }
    printf("%d dia(s)\n",kd);
    printf("%d hora(s)\n",kh);
    printf("%d minuto(s)\n",km);
    printf("%d segundo(s)\n",ks);

    return 0;
}
