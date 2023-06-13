#include <stdio.h>
#include "pilas.h"

int main(){

    struct pila *huevo;
    int elem;

    huevo = NULL;
    crearp(&huevo);
    vacia(huevo);
    mostrarp(huevo);
    push(&huevo, 1);
    push(&huevo, 2);
    push(&huevo, 3);        
    vacia(huevo);
    mostrarp(huevo);
    pop(huevo, &elem);
    vacia(huevo);
    mostrarp(huevo);
    vacia(huevo);
    return 0;
}