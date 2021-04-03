#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#define MAX 3
typedef struct
{
    int zi;
    int luna;
    int an;
} DATA;
typedef struct
{
    unsigned char nume[30];
    DATA dat;
    int sum;
} CLIENT;
void main()
{
    CLIENT bd[MAX];
    int i;
    FILE *baza;
    printf("\n Introduceti datele persoanelor ");
    for(i=0; i<MAX; i++)
    {
        printf("\n====================================");
        printf("\n Nume : ");
        scanf("%s",&bd[i].nume);
        printf("\n Data : ");
        scanf("%d-%d-%d",&bd[i].dat.zi,&bd[i].dat.luna,&bd[i].dat.an);
        printf("\n Suma : ");
        scanf("%d",&bd[i].sum);
    };
    baza=fopen("date.dat","w");
    fwrite( bd, sizeof( CLIENT ), MAX, baza );
    fclose( baza );
}
