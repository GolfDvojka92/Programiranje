#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *niz;
    int n=5;
    niz=(int*)malloc(n*sizeof(int));
    printf("Unesite pozitivne elemente niza(na kraju niza unesite 0):\n");
    int i;
    for(i=0;;i++)
    {
        if(i>n)
        {
            n*=2;
            (int*)realloc(niz,n*sizeof(int));
        }
        printf("\tniz[%d]=",i+1);
        scanf("%d",&niz[i]);
        if(niz[i]<0)
        {
            printf("Uneli ste negativan broj!\nUnesite ponovo isti clan niza: ");
            scanf("%d",&niz[i]);
        }
        if(niz[i]==0)
        {
            break;
        }
    }
    printf("Unesen niz:");
    for(i=0;;i++)
    {
        if(niz[i]==0)
        {
            break;
        }
        printf("%d ",niz[i]);
    }
    return 0;
}
