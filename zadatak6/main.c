#include <stdio.h>
#include <stdlib.h>

void unosMatrice(int** mat, int a, int b)
{
    int i,j;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("\tmat[%d][%d]=", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }
}

void ispisMatrice(int** mat, int a, int b)
{
    int i,j;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void sabiranjeMatrica(int** mat, int** mat2, int** mat3, int a, int b)
{
    int i,j;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            mat3[i][j]=mat[i][j];
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            mat3[i][j]+=mat2[i][j];
        }
    }
}

int main()
{
    int a,b,i;
    int **x,**x2,**x3;

    /*unos dimenzija matrice*/
    printf("Unesite dimenzije matrica: ");
    scanf("%d %d", &a, &b);

    /*alociranje memorije za matrice*/
    x=malloc(a * sizeof *x);
    for(i=0;i<a;i++)
    {
        x[i]=malloc(b*sizeof*x[i]);
    }
    x2=malloc(a * sizeof *x2);
    for(i=0;i<a;i++)
    {
        x2[i]=malloc(b*sizeof*x2[i]);
    }
    x3=malloc(a * sizeof *x3);
    for(i=0;i<a;i++)
    {
        x3[i]=malloc(b*sizeof*x3[i]);
    }

    /*upotreba alociranih matrica*/
    printf("Unesite dimenzije prve matrice:\n");
    unosMatrice(x,a,b); //unos matrica
    printf("Unesite dimenzije druge matrice:\n");
    unosMatrice(x2,a,b);
    sabiranjeMatrica(x,x2,x3,a,b); //sabiranje matrica
    printf("Zbir matrica je:\n");
    ispisMatrice(x3,a,b);

    /*dealociranje matrica*/
    for(i=0;i<a;i++)
    {
        free(x[i]);
    }
    free(x);
    for(i=0;i<a;i++)
    {
        free(x2[i]);
    }
    free(x2);
    for(i=0;i<a;i++)
    {
        free(x3[i]);
    }
    free(x3);
    return 0;
}
