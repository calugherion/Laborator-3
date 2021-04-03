#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

void afis_matr_adiacenta (int b[20][20], int n);
void intr_matr_adiacenta (int b[20][20], int n, int m);

void main()

{
    int b[20][20];
    int m,n,i,j,k=1,nr1,nr2,nr_arc;
    intr_matr_adiacenta (b,n,m);
}

void intr_matr_adiacenta (int b[20][20], int n, int m)
{
    int i,j,nr_arc,caz;
     printf("\n Introduceti Matrice de adiacenta! \n");
    printf("\n Introduceti numarul de varfuri: ");
    scanf("%d", &n);

eror2:
    nr_arc=0;
     printf("\n Introduceti elementele matricei: \n");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
            scanf("%d", &b[i][j]);
        printf("***********************************\n");

    }
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
        {
            if((b[i][j]!=0)&&(b[i][j]!=1))
            {
                printf("EROARE!\n Matrice este introdusa gresit! \n Va rog sa introduceti matricea din nou:\n");
                goto eror2;
            }
            else
                nr_arc++;
        }

    m=nr_arc;
    afis_matr_adiacenta(b,n);

}

    void afis_matr_adiacenta (int b[20][20], int n)
    {
        FILE *f;
        int i,j;
        f=fopen("matrice.txt","w");
        printf("\n Ati introdus Matrice de adiacenta: \n\n");
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
                printf("%d ", b[i][j]);
            printf("\n");
        }
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
                fprintf(f,"%d ", b[i][j]);
            printf("\n");
        }
    }







