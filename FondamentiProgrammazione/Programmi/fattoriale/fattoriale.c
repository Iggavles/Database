#include "fatt.h"

int fatt(int n) //5
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return (n*fatt(n-1));
    }
}