#include<stdio.h>
void main()
{
    int i,n,nr[50],cont0=0,cont1=0,cont2=0,cont3=0,cont4=0,cont5=0,cont6=0,cont7=0,cont8=0,cont9=0;
    FILE *f;
    printf("Cate numere doriti sa introduceti?\t");
    scanf("%d", &n);
    printf("\n Introduceti numerele:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &nr[i]);
    }
    f=fopen("ex15.txt","w");
    for(i=0;i<n;i++)
    {
        fprintf(f,"%d\n", nr[i]);
    if(nr[i]==0) {cont0++;}
    if(nr[i]==1) {cont1++;}
    if(nr[i]==2) {cont2++;}
    if(nr[i]==3) {cont3++;}
    if(nr[i]==4) {cont4++;}
    if(nr[i]==5) {cont5++;}
    if(nr[i]==6) {cont6++;}
    if(nr[i]==7) {cont7++;}
    if(nr[i]==8) {cont8++;}
    if(nr[i]==9) {cont9++;}
    }
    printf("\nCifra 0 apare de %d ori",cont0);
    printf("\nCifra 1 apare de %d ori",cont1);
    printf("\nCifra 2 apare de %d ori",cont2);
    printf("\nCifra 3 apare de %d ori",cont3);
    printf("\nCifra 4 apare de %d ori",cont4);
    printf("\nCifra 5 apare de %d ori",cont5);
    printf("\nCifra 6 apare de %d ori",cont6);
    printf("\nCifra 7 apare de %d ori",cont7);
    printf("\nCifra 8 apare de %d ori",cont8);
    printf("\nCifra 9 apare de %d ori",cont9);

}
