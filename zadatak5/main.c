#include <stdio.h>
#include <stdlib.h>

int deljiviSaTri(int *niz, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(*(niz+i)%3==0)
        {
            printf("%d ", *(niz+i));
        }
    }
}

int main()
{
    int n;
    printf("Unesite duzinu niza: ");
    scanf("%d", &n);
    int niz[n];
    printf("Unesite clanove niza:\n");
    int i;
    for(i=0;i<n;i++)
    {
        printf("\tniz[%d]=", i+1);
        scanf("%d", (niz+i));
    }
    printf("Clanovi niza deljivi sa 3 su:");
    deljiviSaTri(niz,n);
    return 0;
}
