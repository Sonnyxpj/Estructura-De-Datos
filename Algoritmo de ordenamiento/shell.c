#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 500000

void leer(int array[]);
void shell(int array[], int contador);

int main(){
    int array[N], contador;
    time_t t_i, t_f;

    leer(array);

    for(contador = 10000; contador < N; contador = contador + 10000){

        t_i = time(NULL);
        shell(array, contador);
        t_f = time(NULL);

        printf("%d:%lf\n", contador, difftime(t_f, t_i));
    }
    
    return 0;
}


void leer(int array[]){

    FILE *lectura = fopen("aleatorios.txt", "r");
    int i;

    for(i = 0; i <= N; i++){
        int valor;
        fscanf(lectura, "%d", &valor);
        array[i] = valor;
    }
    fclose(lectura);
}

void shell(int array[], int contador){

    int i, salto, aux, cambios;

    for(salto = contador/2; salto != 0; salto = salto/2){
        cambios = 1;
        while(cambios != 0){
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
}