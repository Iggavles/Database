// commentato riga per riga da Daniele (finché è riuscito)


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x=0;                                                    //dichiara una variabile numerica intera e la setta a 0
    int dimensione;                                             //dichiara una variabile numerica intera
    char riga[100];                                             //dichiara una variabile alfanumerica di 100 caratteri massimi
    char articolo_base[5000];                                   //dichiara una variabile alfanumerica di 5000 caratteri massimi
    char *pCh=articolo_base;                                    //dichiara un puntatore di tipo char e lo fa puntare all'inizio di articolo_base
    FILE *file;                                                 //dichiara un puntatore di tipo FILE
    int lunghezza_articolo;                                     //dichiara una variabile numerica intera
    if(argc<2)                                                  //controlla se c'è un secondo argomento, ovvero argv[1]
    {
        printf("Non ci sono abbastanza parametri, controlla di aver messo il nome del file\n");
        exit(-1);                                               //chiude il programma restituendo -1
    }
    if(argc<3)                                                  //controlla se c'è un terzo argomento, ovvero argv[2], che sarà la dimensione del file
    {
        printf("Non ci sono abbastanza parametri, controlla di aver messo il numero massimo di caratteri per riga\n");
        exit(-2);                                               //chiude il programma restituendo -2
    }
    dimensione=atoi(argv[2])                                    //converte la stringa argv[2] in un numero se possibile
    if(dimensione<1)                                            //controlla se l'argomento numerico è una lunghezza maggiore di 0
    {
        printf("Hai chiesto una riga senza caratteri. Dai una dimensione maggiore di zero");
        exit(-3);                                               //chiude il programma restituendo -3
    }
    file=fopen(argv[1],"r");                                    //apre il file indicato in sola lettura
    if(file==NULL)                                              //controlla se fopen ha trovato il file indicato
    {
        printf("il file %s non esiste nella posizione indicata\n",argv[1]);
        exit(-4);                                               //chiude il programma restituendo -4
    }
    while(fgets(riga,sizeof(riga),file)!=NULL)
    {
        int scritti;                                            //setta una variabile numerica intera
        if(riga[strlen[riga]-1]=='\n')                          //controlla se alla fine della riga va a capo
        {
            riga[strlen[riga]-1]='\0';                          //toglie il carattere speciale che fa andare a capo(\n)
        }
        scritti=sprintf(pCh,"%s",riga);                         //stampa la riga nel buffer
        pCh+=scritti;                                           //sposta il puntatore al termine della riga appena letta
    }
    pCh=articolo_base; //= pCh=&(articolo_base[0]);             //punta il puntatore pCh al primo elemento dell'array di caratteri della variabile articolo_base
    lunghezza_articolo=strlen[articolo_base];                   //setta la variabile lunghezza_articolo alla 
    while(pCh<articolo_base+lunghezza_articolo)                 //controlla se il puntatore è arrivato alla fine dell'articolo
    {
        int j=dimensione-1;
        if(pCh[0]=' ')                                          //controlla se pCh è un carattere vuoto(" ")
        {
            pCh++;                                              //fa avanzare pCh di 1
        }
        if(pCh[j+1]=' ')                                        //controlla se il carattere nella posizione successiva a j è un carattere vuoto(" ")
        {
            printf("%.*s\n",dimensione,pCh);                    //stampa qualcosa nella console ma non chiedetemi cosa
        }
        else                                                    //se non lo è, allora fa questo
        {
            while(pCh[j]!=' ')                                  //ripete il ciclo fino a quando la posizone di pCh, indicata da j, non è diversa da un carattere vuoto(" ")
            {
                j--;                                            //riduce la variabile j di 1
            }
            printf("%.*s\n",dimensione,pCh);                    //stampa qualcosa nella console ma non chiedetemi cosa
            pCh+=j;                                             //sposta il puntatore di j posizioni
        }
        printf(".30s\n",pCh);                                   //stampa .30s(vi prego spiegatemi pure a me che cazzo è) nella console
        pCh+=30;                                                //aumenta la posizione del puntatore di 30 unità
        x++;                                                    //aumenta il valore della variabile x di 1
    }
    fclose(file);                                               //chiude il file
    return x;                                                   //ritorna il valore della variabile x al termine della funzione
}
