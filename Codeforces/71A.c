#include<stdio.h>
int main()
{
    char str[101];

    int len,i,n;

    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%s",&str);
        len=strlen(str);
        if(len<=10)
        {
            printf("%s\n",str);
        }
        else
        {
            printf("%c%d%c\n",str[0],len-2,str[len-1]);
        }
    }

    return 0;
}
