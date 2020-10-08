#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DUZINA 20

int provera(char c, char *s1)
{
    int i,brojac=0;
    for(i=0;i<strlen(s1);i++)
    {
        if(*(s1+i)==c)
        {
            brojac++;
        }
    }
    return brojac;
}

int main()
{
    int n;
    char c;
    char s1[MAX_DUZINA];
    printf("Unesite string: ");
    gets(s1);
    printf("Unesite karakter za proveru: ");
    scanf("%c", &c);
    fflush(stdin);
    n=provera(c,s1);
    printf("Karakter %c se pojavljuje %d puta u unesenom stringu. ", c, n);
    return 0;
}
