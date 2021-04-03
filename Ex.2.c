#include <stdio.h>
void main()
{
    int a,b,c,d,e;
    FILE *f;
    printf("Introduceti 5 numere:\n");
    scanf("%d\n %d\n %d\n %d\n %d",&a,&b,&c,&d,&e);

    f = fopen("D:\\numbers.txt", "w");
    fprintf(f,"%d\n%d\n%d\n%d\n%d", a,b,c,d,e);
fclose(f);

}
