#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 500000

void lectura(int array[]);
void burbuja(int array[], int contador);

int main(){
    time_t t_1, t_2;
    int array[N], contador;

    lectura(array);

    for(contador = 5000; contador < N; contador = contador + 5000){

        t_1 = time(NULL);
        burbuja(array, contador);
        t_2 = time(NULL);

        //printf("\nS.O: Windows\n");
        //printf("Algoritmo: Bubble Sort\n");
        printf("%d;%lf\n", contador, difftime(t_2, t_1));
    }

    return 0;
}

void lectura(int array[]){
    FILE *entrada = fopen("aleatorio.txt", "r");
    int i = 0;

    for(i = 0; i < N ; i++){
        int numero;
        fscanf(entrada, "%d", &numero);
        array[i] = numero;
    }

    fclose(entrada);
}

void burbuja(int array[], int contador){

    int i, j, aux;
    for(i = 0; i < contador-1; i++){

        for(j = 0; j < contador-i-1; j++){

            if (array[j+1] < array[j]){

                aux = array[j+1];
                array[j+1] = array[j];
                array[j] = aux;
            }
        }
    }
}