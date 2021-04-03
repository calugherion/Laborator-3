#include <stdio.h>
#include <string.h>
#define DIM 100
typedef struct
{
char nume[20];
}student;
student tab[DIM];
int n;
void cit_sir (char *sir)
{
do
{
 gets (sir);
}while (strlen (sir) == 0);
}
int main (void)
{
FILE *f;
int i;
printf ("Cate inregistrari doriti? ");
scanf ("%d", &n);
for (i = 0; i < n; i++)
{
 printf ("Numele persoanei %d: ", i + 1);
 cit_sir (tab[i].nume);
}
/*se creează un fişier text*/
f = fopen ("STUDENTI.txt", "w");

fwrite (tab, sizeof (student), n, f);
 fclose (f);
return 0;
}
