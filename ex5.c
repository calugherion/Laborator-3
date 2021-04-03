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
    int j,sm,i,smax,ni;
    FILE *baza;
    baza=fopen("date.dat","r");
    fread( bd, sizeof( CLIENT ), MAX, baza );
    fclose( baza );
    smax=0;
    for(i=0; i<MAX; i++)
    {
        if (smax<bd[i].sum)
        {
            smax=bd[i].sum;
            ni=i;
        }
    }
    printf("\n %s  ,  %d-%d-%d  ,  %d \n",bd[ni].nume, bd[ni].dat.zi, bd[ni].dat.luna, bd[ni].dat.an, bd[ni].sum);
    j=1;
    sm=bd[0].sum;
    for (i=1; i<MAX; i++)
    {
        if (bd[i].dat.zi==bd[i-1].dat.zi && bd[i].dat.luna==bd[i-1].dat.luna && bd[i].dat.an==bd[i-1].dat.an)
        {
            j=j+1;
            sm=sm+bd[i].sum;
        }
        else
        {
            printf(" \n Nr. depuneri din data %d-%d-%d = %d ; Suma depusa = %d ",bd[i-1].dat.zi,bd[i-1].dat.luna,bd[i-1].dat.an,j,sm);
            j=1;
            sm=bd[i].sum;
        }
    }
    printf(" \n Nr. depuneri din data %d-%d-%d = %d ; Suma depusa = %d ",bd[i-1].dat.zi,bd[i-1].dat.luna,bd[i-1].dat.an,j,sm);
    printf("\n \n");
}
