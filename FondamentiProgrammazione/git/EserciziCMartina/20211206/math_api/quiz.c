#include "quiz.h"

int quiz(int x, int y) { // la funzione quiz che accetta due variabili, chiamate x e y
int r; //identico un intero chiamato R
     if (x < 0) x = -x; // se la condizione è che x è minore di 0, allora x verrà convertito in positivo
    if (y < 0) y = -y; // se la condizione è che y è minore di 0, allora y verrà convertito in positivo

  while (y) { //mentre y
r = x % y; // r sarà uguale alla divisione tra x e y
x = y; // x sarà uguale a y
y = r; // y sarà uguale a r
            }

  return x; //ritorna x
}