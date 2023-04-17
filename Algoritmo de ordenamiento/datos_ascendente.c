#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    FILE* datos;
    datos = fopen("datos_ascendente.txt", "wt");
    int numero, i, dato;
    srand(time(0));
    numero=1000000;
    //printf("%d\n",numero);
    for (i=1; i<= numero; i++){
        fprintf(datos, "%d\n", i);
    }

 return 0;
}