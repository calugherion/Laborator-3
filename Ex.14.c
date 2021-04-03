#include <stdio.h>
void main(void){
  char nume[12];
  printf("Introduceti testul in primul fisier:\n");
  gets(nume);
  FILE *s,*d;
  s=fopen("fis1.txt", "w");
   d=fopen("fis2.txt", "w");
   fprintf(s,"%s",nume);
   printf("\nInformatia a fost introdusa in primul fisier!\n");
   printf("Pentru a copia informatia din primul fisier in al 2-lea, tastati ENTER!\n");
   getch();
   fprintf(d,"%s",nume);
   printf("Informatia a fost copiata cu succes!\n");
}
