#include <stdio.h>
long get_file_size (FILE *fisier)
{
    long pos;
    long size;

    /* salvam pozitia curenta a cursorului */
    pos = ftell (fisier);
    /* pozitionare la sfarsitul fisierului */
    fseek (fisier, 0, SEEK_END);
    /* aflam dimensiunea in octeti */
    size = ftell (fisier);
    /* refacem pozitia initiala a cursorului */
    fseek (fisier, pos, SEEK_SET);
    return size;
}
int main (void)
{
    FILE *fisier;
    long size;
    /* deschidem fisierul pentru citire, binar */
    fisier = fopen ("AUTOEXEC.BAT" , "rb");
    if (fisier == NULL)
    {
        printf ("Nu se poate deschide fisierul AUTOEXEC.BAT ! \n");
    }
    else
    {
        size = get_file_size (fisier);
        printf ("Fisierul AUTOEXEC.BAT  are %d octeti. \n",size);

        fclose (fisier);
    }
    return 0;
}
