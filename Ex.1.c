#include <stdio.h>
#include <string.h>
void main()
{
    char s1[50],s2[50],s3[50];
    FILE *f,*f1;
    printf("Introduceti text 1:\n");
    gets(s1);
    printf("Introduceti text 2:\n");
    gets(s2);
    printf("Introduceti text 3:\n");
    gets(s3);
     f = fopen("TEXT.txt", "w");
        fprintf(f,"%s\n%s\n%s",s1,s2,s3);
    strrev(s1);
     strrev(s2);
     strrev(s3);
    printf("\nTextele au fost inversate si scrise in fisierul INVERS.txt\n");

        f1 = fopen("INVERS.txt", "w");
        fprintf(f1,"%s\n%s\n%s",s1,s2,s3);
}
