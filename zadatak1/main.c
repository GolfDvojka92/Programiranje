#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[100];
    printf("Unesite ime datoteke (ime.txt): ");
    gets(s);
    FILE *f;
    f=fopen(s,"r+");
    if(f==NULL)
    {
        printf("Datoteka ne moze biti otvorena");
        return 0;
    }
    char c;
    while(1)
    {
        c=fgetc(f);
        if(c==EOF)
        {
            break;
        }
        if(c>='a' && c<='z')
        {
            c-=32;
        }
        fseek(f,-1,SEEK_CUR);
        fputc(c,f);
        fseek(f,0,SEEK_CUR);
    }
    fclose(f);
    return 0;
}
