#include <stdio.h>
#include <stdlib.h>

int najveciClan(int *niz, int n)
{
    int m=0,i;
    for(i=0;i<n;i++)
    {
        if(niz[i]>m)
        {
            m=niz[i];
        }
    }
    return m;
}

int main()
{
    int i,n,m;
    printf("Unesite duzinu niza: ");
    scanf("%d", &n);
    int niz[n];
    printf("Unesite clanove niza:\n");
    for(i=0;i<n;i++)
    {
        printf("\tniz[%d]: ", i+1);
        scanf("%d", &niz[i]);
    }
    m=najveciClan(niz,n);
    printf("Najveci clan niza je:%d",m);
    return 0;
}
