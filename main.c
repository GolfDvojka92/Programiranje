#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DUZINA 20

int jednaki(char *s1, char *s2)
{
    int i;
    for(i=0;i<strlen(s1);i++)
    {
        if(s1[i]!=s2[i])
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}

int main()
{
    char s1[MAX_DUZINA], s2[MAX_DUZINA];
    printf("Unesite prvi string: ");
    gets(s1);
    printf("Unesite drugi string: ");
    gets(s2);
    if(jednaki(s1,s2)==0)
    {
        printf("Stringovi nisu jednaki.");
    }
    else
    {
        printf("Stringovi su jednaki.");
    }
    return 0;
}
