#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m=10;
    printf("Unesite zeljeni broj veci od nula: ");
    scanf("%d",&n);
    while(n<=0)
    {
        printf("Uneli ste negativan broj! Molimo unesite broj veci od nule: ");
        scanf("%d",&n);
    }
    int *niz;
    niz=(int*)malloc(m*sizeof(int));
    niz[0]=0;
    niz[1]=1;
    int i;
    for(i=2;;i++)
    {
        if(i==m)
        {
            m*=2;
            (int*)realloc(niz,m*sizeof(int));
        }
        niz[i]=niz[i-2]+niz[i-1];
        if(niz[i]>n)
        {
            break;
        }
    }
    printf("Niz fibonacijevih brojeva manjih od %d je:",n);
    for(i=0;;i++)
    {
        if(niz[i]>=n)
        {
            break;
        }
        else
        {
            printf("%d ",niz[i]);
        }
    }
    return 0;
}
