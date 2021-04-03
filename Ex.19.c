#include<stdio.h>
#include<string.h>
void main()
{
    char s1[50],s2[50];
    FILE *f1,*f2,*f3;
    f1=fopen("fis1.txt","w");
    printf("Introduceti informatia in primul fisier:\n");
    gets(s1);
    fprintf(f1,"%s",s1);

    f2=fopen("fis2.txt","w");
    printf("Introduceti informatia in al 2-lea fisier:\n");
    gets(s2);
    fprintf(f2,"%s",s2);

    f3=fopen("fis3.txt","w");
    printf("Fisierul 3 va contine informatia din ambele fisiere.\n");
     fprintf(f3,"%s",s1);
      fprintf(f3,"%s",s2);
}
