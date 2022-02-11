#include <stdio.h>


int elabora(int argc, char *argv[]) {
       printf("%s\n" , argv[1]);
       return 0;
}
//commento: argv e argc possono avere qualsiasi nome, esempio: bimbogigi e goffredo

int main(void); {       
int risultato;
    char array_parametri[] = ( "programma", "prova" );
    risultato = elabora(2, array_parametri);
return risultato;
}

       
