# include <stdio.h>
# include <stdlib.h>
struct element
{
    int podatak;
    struct element *sledeci;
};

struct element *dodaj(struct element *p, int n)
{
    struct element *pom;
    if(p==NULL)
    {

    p=(struct element *)malloc(sizeof(struct element));
    if(p==NULL)
    {
        printf("Greska.\n");
        exit(0);
    }
    p->podatak = n;
    p->sledeci = NULL;
    }
    else
    {
        pom = p;
        while (pom->sledeci != NULL) pom = pom->sledeci;
        pom->sledeci = (struct element *)malloc(sizeof(struct element));
        if(pom->sledeci == NULL)
        {
            printf("Greska.\n");
            exit(0);
        }
        pom = pom->sledeci;
        pom->podatak = n;
        pom->sledeci = NULL;
    }
    return (p);
}
void stampaj_listu( struct element *p )
{
    struct element *pom;
    pom = p;
    if(p!= NULL)
    {
        do
        {
            printf("%d\t",pom->podatak);
            pom=pom->sledeci;
        }
        while (pom!= NULL);
            printf("\n");
    }
    else
    printf("Lista je prazna.\n");
}
int duzina( struct element *p )
{
    int broj = 0 ;
    while ( p != NULL )
    {
        broj++;
        p = p->sledeci;
    }
    return ( broj ) ;
}

struct element *obrisi( struct element *p, int redni_broj )
{
    struct element *prethodni, *trenutni ;
    int i;
    if (p == NULL )
    {
        printf("Lista je prazna. \n");
    }
    else
    {
        if ( redni_broj > duzina(p) )
        {
            printf("Greska.\n");
        }
        else
        {
            prethodni = NULL;
            trenutni = p;
            i = 1;
            while ( i < redni_broj )
            {
                prethodni = trenutni;
                trenutni = trenutni->sledeci;
               i = i+1;
            }
            if ( prethodni == NULL )
            {
                p = trenutni->sledeci;
                free( trenutni );
            }
            else
            {
                prethodni->sledeci = trenutni->sledeci;
                free( trenutni );
            }
        }
    }
    return(p);
}
void main()
{
    int n,i;
    int x;
    struct element *glava = NULL;
    printf("Unesi broj cvorova u listi:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Unesi %d. element:\n", i+1);
        scanf("%d",&x);
        glava = dodaj( glava, x );
    }
    printf("Lista pre brisanja elementa:\n");
    stampaj_listu( glava );
    printf("Unesi redni broj elementa:\n");
    scanf ("%d",&n);
    glava = obrisi(glava , n );
    printf("Lista posle brisanja elementa:\n");
    stampaj_listu( glava );
}
