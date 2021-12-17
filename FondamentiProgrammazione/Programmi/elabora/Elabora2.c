/*
Quando invocheremo il nostro programma con
elabora tutti_i_miei_comandi.txt
il valore di argv[0] sarà "elabora"
il valore di argv[1] sarà "tutti_i_miei_comadi.txt"
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char riga_corrente[100];                                                //dichiara una variabile alfabetica di 100 caratteri
    FILE *fh;                                                               //dichiara un puntatore per il file
    //strcpy(nome_file,argv[1]);                                            //copia il primo argomento(che sarà il nome del file da visualizzare) nella variabile nome_file
    if(argc<2)                                                              //controlla che ci sia almeno 1 argomento utile
    {
        printf("Passare il nome del file\n");                               //stampa "Passare il nome del file"
        exit(-1);                                                           //esce dal programma e restituisce -1
    }
    fh=fopen(argv[1],"r");                                                  //apre il file in sola lettura
    if(fh==NULL)                                                            //controlla se il file esiste o meno
    {
        printf("Il file %s non esiste nella posizione indicata",argv[1]);   //stampa un messaggio che dice che il file non esiste nella posizione indicata
        exit(-2);                                                           //esce dal programma e restituisce -2
    }
    while(fgets(riga_corrente,sizeof(argv[1]),fh)!=NULL)                    //se fgets non da come risultato NULL continua il ciclo
    {
        printf("%s\n", riga_corrente[9]);                                   //stampa riga_corrente dal carattere 9
    }
    fclose(fh);                                                             //chiude il file
    return 0;                                                               //esce dalla funzione e restituisce 0
}