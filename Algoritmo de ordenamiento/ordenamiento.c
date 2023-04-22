#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <sys/resource.h>

#define N 1000000

void lectura(int array[]);
void burbuja(int array[], int contador);
void shell(int array[], int contador);

void swap(int* a, int* b);
int particion (int array[], int bajo, int alto);
void quickSort(int array[], int bajo, int alto);


struct rusage usada;

int main(){

    getrusage(RUSAGE_SELF, &usada);
    struct timeval t_1, t_2;  
    double tiempo; 
    int array[N], contador;

    lectura(array);

    for(contador = 10000; contador <= N; contador = contador + 10000){

    gettimeofday(&t_1,NULL); 

    //burbuja(array, contador);
    //shell(array, contador);
    quickSort(array, 0, contador-1);

    gettimeofday(&t_2,NULL);

    tiempo = (t_2.tv_sec - t_1.tv_sec)*1000 + (t_2.tv_usec - t_1.tv_usec)/1000;

    printf("%d;%g;%ldB\n", contador, tiempo/1000, usada.ru_maxrss);
    }
    
    printf("%ldB\n", usada.ru_maxrss);

    return 0;
}

void lectura(int array[]){
    FILE *entrada = fopen("datos.txt", "r");
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
    
void shell(int array[], int contador){
    int salto, cambios, i, aux;

    for(salto = contador/2; salto!=0; salto = salto/2){

        cambios = 1;
        
        while (cambios != 0){

            cambios=0; 

            for(i = salto;i < contador; i++){

                if(array[i-salto]>array[i]){ 
                    
                    aux=array[i];
                    array[i]=array[i-salto]; 
                    array[i-salto]=aux; 
                    cambios++;
                } 
            }
        }
    }
}

void swap(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
}
 
int particion (int array[], int bajo, int alto){
    int pivote, i, j;
    pivote = array[alto];
    i = (bajo - 1);
 
    for (j = bajo; j <= alto- 1; j++){
        if (array[j] <= pivote){
            i++; 
            swap(&array[i], &array[j]);
        }
    }

    swap(&array[i + 1], &array[alto]);
    return (i + 1);
}
 
void quickSort(int array[], int bajo, int alto){
	int pi;
    if (bajo < alto){
        pi = particion(array, bajo, alto);
        quickSort(array, bajo, pi - 1);
        quickSort(array, pi + 1, alto);
    }
}