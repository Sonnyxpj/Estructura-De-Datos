#include <stdio.h>
#include "lista.h"

int main(){

    struct lista *palta;

    crea_lista(&palta);
    add_final(&palta, 150);
    recorre(&palta);


    return 0;
}