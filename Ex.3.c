#include <stdio.h>
void main()
{
    int a[10],i,s=0 ;
    FILE *f,*f_out;
    printf("Introduceti 10 numere:\n");
    for(i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }

    f = fopen("D:\\introd.txt", "w");
    f_out = fopen("D:\\out.txt", "w");
    for(i=0; i<10; i++)
    {
        fprintf(f,"%d\n", a[i]);
    }
    fclose(f);
    for(i=0; i<10; i++)
    {
        s=s+a[i];
    }
    printf("Suma = %d",s);
    fprintf(f_out,"Suma=%d", s);
}
