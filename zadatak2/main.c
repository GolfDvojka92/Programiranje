#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *niz;
    int n;
    printf("Unesite duzinu niza: ");
    scanf("%d",&n);
    niz=(int*)malloc(n*sizeof(int));
    int i;
    printf("Unesite clanove niza:\n");
    for(i=0;i<n;i++)
    {
        printf("\tniz[%d]=", i+1);
        scanf("%d", &niz[i]);
    }
    int ukupno=0;
    float prosek;
    for(i=0;i<n;i++)
    {
        ukupno+=niz[i];
    }
    prosek=(float)ukupno/(float)n;
    printf("Prosecna vrednost svih clanova niza je:%.2f", prosek);
    return 0;
}
