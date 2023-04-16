#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    FILE* datos;
    datos = fopen("aleatorios.txt","wt");
    int numero,i, dato;
    srand(time(0));
    numero = 1000000;
    //printf("%d\n",numero);
    for (i=0; i< numero; i++){
        dato = ("%d\n",rand()%100000);
        fprintf(datos, "%d\n", dato);
    }
    return 0;
}