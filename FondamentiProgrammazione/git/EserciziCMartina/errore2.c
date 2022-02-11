#include <stdio.h>
#include <string.h>

#include "./elabora.h"

int elabora(int contatore_parametri, char *parametri[]) {
       char buffer[4];
       strncpy (buffer, parametri[1], sizeof(buffer));
       printf("%s\n" , buffer);
}

/* commento: argv e argc che vediamo spesso possono avere qualsiasi nome, esempio: bimbogigi e goffredo */

int main(void); {       
int risultato;
    char *array_parametri[] = { "programma", "€" );
    elabora(2, array_parametri);
return 0;
}
