#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 500000

void lectura(int array[]);
void shell(int array[], int contador);

int main(){
    time_t t_1, t_2;
    int array[N], contador;

    lectura(array);

    for(contador = 10000; contador < N; contador = contador + 10000){

        t_1 = time(NULL);
        shell(array, contador);
        t_2 = time(NULL);

        //printf("\nS.O: Windows\n");
        //printf("Algoritmo: Shell Sort\n");
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


void shell(int array[], int contador){

    int cambios = 1, aux;

    for(salto = contador/2; salto != 0; salto = salto/2){
        cambios = 1;
        while (cambios != 0){
            cambios = 0;
            for(i = salto; i < contador; i++){
                if(array[i-salto] > array[i]){
                    aux = array[i];
                    array[i] = array[i - salto];
                    array[i - salto] = aux;
                    cambios++;
                }
            }
        }
        
    }
    return 0;
}