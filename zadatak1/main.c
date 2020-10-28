#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_DUZINA 100

int main()
{
    char *s;
    s=(char*)malloc(MAX_DUZINA * sizeof(char));
    printf("Unesite string: ");
    gets(s);
    int i;
    for(i=0;;i++)
    {
        if(s[i]=='\0')
        {
            break;
        }
        s[i]=toupper(s[i]);
    }
    printf("Prepravljeni string: ");
    puts(s);
    return 0;
}
