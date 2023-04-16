#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
limite inferior, superior LISTO
numero aleatorio  LISTO
comprobar si es el numero Listo
contar cada intento Listo

Falta terminar el codigo al escribir Fin
*/

int numero_aleatorio(int li, int ls);
int comprobar(int li, int ls, int aleatorio);

int main(){
    int li = 0, ls = 0, aleatorio = 0;

    printf("Ingrese el limite inferior:");
    scanf("%d", &li);
    printf("Ingrese el lmite superior:");
    scanf("%d", &ls);

    aleatorio = numero_aleatorio(li, ls);

    printf("El numero esta entre [%d,%d] y el aleatorio es %d\n", li, ls, aleatorio);
    comprobar(li, ls, aleatorio);

    return 0;
}

int numero_aleatorio(int li, int ls){
    int aleatorio;

    srand(time(0));
    aleatorio = (rand() % ls) + li;

    return aleatorio;
}

int comprobar(int li, int ls, int aleatorio){

    int limite_inferior, limite_superior, incognita = 0, numero_persona, constante = 1, intentos = 1;

    limite_inferior = li;
    limite_superior = ls;
    incognita = aleatorio;

    while (constante == 1){
        printf("Introduzca el numero:");
        scanf("%d", &numero_persona);
        if ((numero_persona < limite_inferior) | (numero_persona > limite_superior)){

            printf("Valor fuera de rango\n");
            intentos++;

        }else if (numero_persona == incognita){

            printf("Numero acertado!\n");
            printf("Intentos realizados %d\n", intentos);
            return constante = 0;

        }else if (numero_persona < incognita){
            
            printf("El numero buscado es mayor\n");
            intentos++;

        }else if (numero_persona > incognita){
            
            printf("El numero buscado es menor\n");
            intentos++;
        }
    }
}
