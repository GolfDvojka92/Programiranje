#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n;
    printf("Unesite dimenziju kvadratne matrice: ");
    scanf("%d", &n);
    float mat[n][n];
    printf("Unesite clanove matrice:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\tmat[%d][%d]: ", i+1,j+1);
            scanf("%f", &mat[i][j]);
        }
    }
    float mat2[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            mat2[i][j]=mat[j][i];
        }
    }
    printf("Transponovana matrica:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%.2f ", mat2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
