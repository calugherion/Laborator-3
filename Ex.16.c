#include <stdio.h>
#include<string.h>
void main()
{
    char s1[50],nume1[20];
    FILE *f1,*f2;
    printf("Vom crea un fisier cu numele 'Fisier1.txt'!\n");
    printf("Introduceti textul in fisier:\n");
    gets(s1);
    f1=fopen("fisier1.txt","w");
    fprintf(f1,"%s",s1);
    strupr(s1);
    printf("Vom crea un fisier cu numele 'Fisier2.txt'!\n");
    f2=fopen("fisier2.txt","w");
    printf("In fiserul 2 va fi transformat textul din primul fisier:\n");
    fprintf(f2,"%s",s1);
}
