#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    FILE* datos;
    datos = fopen("datos_descendente.txt", "wt");

    int numero, i , dato;
    srand(time(0));
    numero = 1000000;

    for(i = numero; i > 0; i--){
        fprintf(datos, "%d\n",i);
    }
    return 0;
}