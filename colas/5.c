#include <stdio.h>
#include "cola.h"

int main(){

    struct cola *completo;
    int elem;
    crearc(&completo);
    muestrac(completo);
    encolar(&completo,6);
    muestrac(completo);
    encolar(&completo,1);
    muestrac(completo);
    desencolar(&completo, &elem);
    muestrac(completo);
}