#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int dimensione;
    char riga[100];
    FILE *file;
    int x=0;
    if(argc<2)
    {
        printf("Non ci sono abbastanza parametri, controlla di aver messo il nome del file\n");
        exit(-1);
    }
    if(argc<3)
    {
        printf("Non ci sono abbastanza parametri, controlla di aver messo il numero massimo di caratteri per riga\n");
        exit(-2);
    }
    dimensione=atoi(argv[2])
    if(dimensione<1)
    {
        printf("Hai chiesto una riga senza caratteri. Dai una dimensione maggiore di zero");
        exit(-3);
    }
    file=fopen(argv[1],"r");
    if(file==NULL)
    {
        printf("il file %s non esiste nella posizione indicata\n",argv[1]);
        exit(-4);
    }
    while(fgets(riga,sizeof(riga),file)!=NULL)
    {
        if(riga[strlen[riga]-1]=='\n')
        {
            riga[strlen[riga]-1]='\n';
        }
        printf("%s\n",riga);
        x=x+1;
    }
    fclose(file);
    return x;
}