#include "fatt.h"
unsigned long int fatt(unsigned long long int n) { 
   if (n==1L) {
      return 1ULL;
      }
   else {
      return (n * fatt(n-1ULL));
   }
 }
