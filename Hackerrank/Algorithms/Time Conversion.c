#include<stdio.h>

int main()
{
    char time[15];
    int h;
    char r[3];
    scanf("%s",&time);
    char hr[3]= {time[0],time[1]};
    char d[3]= {time[8],time[9]};


    if(strcmp(d,"PM")==0)
    {

        h=atoi(hr);
        if(h==12)
        {
            h=12;
        }
        else{
           h+=12;
        }



    }
    else if(strcmp(d,"AM")==0)
    {
        if(strcmp(hr,"12")==0)
        {
            h=0;
        }
        else
        {
            h=atoi(hr);
        }
    }
    sprintf(r,"%d",h);
    if(h<12)
    {
        time[0]='0';
        time[1]=r[0];
    }
    else
    {
        time[0]=r[0];
        time[1]=r[1];
    }
    char rs[10]= {time[0],time[1],time[2],time[3],time[4],time[5],time[6],time[7]};
    printf("%s",rs);

    return 0;
}
