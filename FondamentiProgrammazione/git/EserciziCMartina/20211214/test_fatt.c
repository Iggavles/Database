#include "fatt.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
unsigned long int a, b;
 if (argc != 3) {
     printf("Usage: test driver <int_a> <int_b>\n");
     exit(-1);
 }

a = atol(argv[1]); 
 if (a == 0) {
     printf("First argument must be an integer\n");
     exit(-2);
 }

b = atol(argv[2]);

if (b == 0) {
     printf("Second argument must be an integer\n");
     exit(-3);
 }

printf("fatt(%llu) = (%llu)\n", a, fatt(a));
    return 0;

}
