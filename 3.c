#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
int check(char * text)
{
    if ( text[strlen(text)-1]!='.')
    {
        printf("\nDupa ultimul cuvint se pune . dupa urmatorul ,\n");
        return 0;
    }
    char * pch, t[300];
    int nr=0;
    strcpy(t,text);
    pch = strtok (t,",");
    while (pch != NULL)
    {
        nr++;
        if (strlen(pch)<1 || strlen(pch)>5)
        {
            printf("\nCuvinutl trebuie sa fie intre 1 si 5 litere\n");
            return 0;
        }
        pch = strtok (NULL, " ,.-");
    }
    if (nr<7 || nr>17)
    {
        printf("\nSirul trebuie sa contina 7 - 17 cuvinte\n");
        return 0;
    }
    return 1;
}
void creare()
{
    char text[300];
    int ch=0;
    while(!ch)
    {
        printf("\nIntroduceti sirul: \n");
        gets(text);
        ch = check(text);
    }
    FILE *f;
    f = fopen("D:\\intrare.txt", "w");
    fputs(text,f);
    fclose(f);
}
int simetric(char *cuv)
{
    int i;
    for (i=0; i<strlen(cuv)/2; i++)
        if (*(cuv+i)!=*(cuv+strlen(cuv)-1-i)) return 0;
    return 1;
}
char * get_text(FILE*f)   // citirea textului in variabila
{
    int nr=0, i;
    char c, *str;
    while(!feof(f))
    {
        fscanf(f,"%c", &c);
        nr++;
    }
    str = (char*)malloc(nr+1);
    rewind(f);
    fgets(str,nr, f);
    str[nr+1]='\0';
    return str;
}
void write_cuv_sim(char *str, FILE *f)    // inscrie in file cuvinte simetrice
{
    char *s, *cs;
    s=(char*)malloc(strlen(str));
    cs=(char*)malloc(strlen(str));
    strcpy(s,str);
    fprintf(f,"cuvinte simetrice: ");
    char *pch;
    pch = strtok(s,",.");
    *cs='\0';
    while (pch != NULL)
    {
        if (simetric(pch) && strstr(cs,pch)==NULL)
        {
            fputs(pch,f);
            fprintf(f,",");
            strcat(cs,pch);
        }
        pch = strtok (NULL, " ,.-");
    }
    fprintf(f,"\n");
}
void write_cuv_lit(char *str, FILE *f)     // inscrie in file cuvinte la care ult. litera se repeta
{
    char *s, c, *cs;
    s=(char*)malloc(strlen(str));
    cs=(char*)malloc(strlen(str));
    *cs='\0';
    strcpy(s,str);
    fprintf(f,"cuvinte la care ultima litera se mai repeta: ");
    char *pch;
    pch = strtok(s,",.");
    while (pch != NULL)
    {
        c = *(pch+strlen(pch)-1);
        if (strchr(pch,c)!=strrchr(pch,c) && strstr(cs,pch)==NULL)
        {
            fputs(pch,f);
            fprintf(f,",");
            strcat(cs,pch);
        }
        pch = strtok (NULL, " ,.-");
    }
    fprintf(f,"\n");
}
void write_cuv_rep(char *str, FILE *f)    //  inscrie in file cuvinte ce se repeta
{
    char *s, *cs;
    s=(char*)malloc(strlen(str));
    cs=(char*)malloc(strlen(str));
    *cs='\0';
    strcpy(s,str);
    fprintf(f,"cuvinte ce se mai repeta: ");
    char *pch, *cuv, *t;
    int nr=0;
    cuv = strtok(s,",.");
    while (cuv != NULL)
    {
        strcpy(s,str);
        pch = strtok(s,",.");
        while (pch!=NULL)
        {
            if (strcmp(cuv,pch)==0) nr++;
            pch = strtok (NULL, " ,.-");
        }
        if (nr>1 && strstr(cs,cuv)==NULL)
        {
            fputs(cuv,f);
            fprintf(f,",");
            strcat(cs,cuv);
        }
        nr=0;
        strcpy(s,str);
        t = strtok(s,",.");
        while(t!=cuv) t = strtok(NULL,",.");
        cuv = strtok(NULL, ",.");
    }
    fprintf(f,"\n");
}
void main()
{
    creare();
    FILE *f;
    f = fopen("D:\\intrare.txt", "r");
    if (f==NULL)
    {
        printf("file error");
        getche();
        return;
    }
    char *str;
    str = get_text(f);
    fclose(f);
    f = fopen("D:\\out.txt", "w");
    if (f==NULL)
    {
        printf("File error");
        getche();
        return;
    }
    write_cuv_sim(str,f);
    write_cuv_lit(str,f);
    write_cuv_rep(str,f);
    fclose(f);
    printf("\nout.txt a fost creat\n");
    getche();
}
