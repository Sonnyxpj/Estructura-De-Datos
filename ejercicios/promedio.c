#include <stdio.h>

int main(){

    int cantidad = 0,num = 0, ponderacion = 0, aux, ponderacion_f =100;
    float suma = 0, promedio;
    printf("Programa para calcular el promedio de N números \n");
    printf("Cuantas notas desea ingresas: \n");
    scanf("%d", &cantidad);

    for ( int i = 1; i <= cantidad; i++)
    {
        printf("Valor de la nota %d: ", i);
        scanf("%i", &num);
        printf("Ponderación de la nota\n");
        scanf("%i", &aux);
        suma = suma + ((num*aux)/10);
        ponderacion = ponderacion + aux;
    }

    if (ponderacion == 100)
    {
        promedio = (suma/ponderacion_f);
        printf("Su promedio es: %.1f",promedio);
        return 0;
    }else{
        printf("La ponderación final esta mal, intente denuevo\n");
        ponderacion = 0, promedio = 0, suma = 0 ;
        for ( int i = 1; i <= cantidad; i++)
        {
        printf("Valor de la nota %d: ", i);
        scanf("%i", &num);
        printf("Ponderación de la nota\n");
        scanf("%i", &aux);
        suma = suma + ((num*aux)/10);
        ponderacion = ponderacion + aux;
        }
        promedio = (suma/ponderacion_f);
        printf("Su promedio es: %.1f",promedio);
    }
    
    return 0;
}
