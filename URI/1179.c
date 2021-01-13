#include<stdio.h>
int main()
{
    int i,n[15],impar[5],im=0,ic=0,par[5],pc=0,p=0,j,b,a,c;
    for(i=0; i<15; i++)
    {
        scanf("%d",&n[i]);
    }
    for(b=0; b<15; b++)
    {

        if(p==5)
        {
            for(a=0; a<5; a++)
            {
                printf("par[%d] = %d\n",a,par[a]);
            }
            p=0;
        }
        if(im==5)
        {
            for(c=0; c<5; c++)
            {
                printf("impar[%d] = %d\n",c,impar[c]);

            }im=0;
        }
        if(n[b]%2!=0)
        {
            impar[ic]=n[b];
            ic++;
            im++;
            if(ic==5)
                ic=0;
        }
        if(n[b]%2==0)
        {
            par[pc]=n[b];
            pc++;
            p++;
            if(pc==5)
                pc=0;
        }
    }
    for(i=0; i<im; i++)
    {
        printf("impar[%d] = %d\n",i,impar[i]);
    }
    for(j=0; j<p; j++)
    {
        printf("par[%d] = %d\n",j,par[j]);
    }
    return 0;
}
