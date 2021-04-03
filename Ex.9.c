#include <stdio.h>
#include <string.h>

void main()
{
    char s1[50],s2[50],s3[50],s4[50],s5[50],s6[50],s7[50];
    FILE *f;
    printf("1.\tIntroduceti ziua si suma cheltuita:\n");
    gets(s1);
    printf("2.\tIntroduceti ziua si suma cheltuita:\n");
    gets(s2);
    printf("3.\tIntroduceti ziua si suma cheltuita:\n");
    gets(s3);
    printf("4.\tIntroduceti ziua si suma cheltuita:\n");
    gets(s4);
    printf("5.\tIntroduceti ziua si suma cheltuita:\n");
    gets(s5);
    printf("6.\tIntroduceti ziua si suma cheltuita:\n");
    gets(s6);
    printf("7.\tIntroduceti ziua si suma cheltuita:\n");
    gets(s7);
    f = fopen("Saptamana.txt", "w");
    fprintf(f,"%s\n%s\n%s\n%s\n%s\n%s\n%s",s1,s2,s3,s4,s5,s6,s7);
}
