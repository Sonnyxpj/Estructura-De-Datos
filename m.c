#include <stdio.h>


void maximoI(int arreglo, int tam);



int main(){

    int arreglo[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tam = 0;
    tam = sizeof(arreglo)/ 4;
    printf("%d",tam);
    maximoI(arreglo, tam);
    
    return 0;
}



void maximoT(int arreglo, int tam){

}