/*
Quando invocheremo il nostro programma con
elabora tutti_i_miei_comandi.txt
il valore di argv[0] sarà "elabora"
il valore di argv[1] sarà "tutti_i_miei_comadi.txt"
*/

int main(int argc, char *argv[])
{
    char nome_file[100];                                        //dichiara una variabile alfabetica di 100 caratteri
    char riga_corrente[100];
    FILE *fh;                                                   //dichiara un puntatore per il file
    strcpy(nome_file,argv[1]);                                  //copia il primo argomento(che sarà il nome del file da visualizzare) nella variabile nome_file
    fh=fopen(nome_file,"r");                                    //apre il file in sola lettura
    while(fgets(riga_corrente,sizeof(riga_corrente),fh)!=NULL)  //se fgets non da come risultato NULL continua il ciclo
    {
        printf("%s\n", riga_corrente[9]);                       //stampa riga_corrente dal carattere 9
    }
    fclose(fh);                                                 //chiude il file
}
/*
fgets() reads at most one less than size characters from stream and stores them into a
*/