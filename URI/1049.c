#include<stdio.h>
int main()

{
    char c[20],s[20],f[20];
    char c1[]="vertebrado",c2[]="invertebrado",s11[]="ave",s12[]="mamifero",s21[]="inseto",s22[]="anelideo",
                                f11[]="carnivoro",f12[]="onivoro",f21[]="onivoro",f22[]="herbivoro",
                                        f31[]="hematofago",f32[]="herbivoro",f41[]="hematofago",f42[]="onivoro";
    scanf("%s",&c);
    scanf("%s",&s);
    scanf("%s",&f);
    if(0==strcmp(c,c1))
    {
        if(0==strcmp(s,s11))
        {
            if(0==strcmp(f,f11))
            {
                printf("aguia\n");
            }
            else if(0==strcmp(f,f12))
            {
                printf("pomba\n");
            }
        }
        else if(0==strcmp(s,s12))
        {
            if(0==strcmp(f,f21))
            {
                printf("homem\n");
            }
            else if(0==strcmp(f,f22))
            {
                printf("vaca\n");
            }
        }
    }
    if(0==strcmp(c,c2))
    {
        if(0==strcmp(s,s21))
        {
            if(0==strcmp(f,f31))
            {
                printf("pulga\n");
            }
            else if(0==strcmp(f,f32))
            {
                printf("lagarta\n");
            }
        }
        else if(0==strcmp(s,s22))
        {
            if(0==strcmp(f,f41))
            {
                printf("sanguessuga\n");
            }
            else if(0==strcmp(f,f42))
            {
                printf("minhoca\n");
            }
        }
    }

    return 0;
}
