//realizar un algoritmo que solicite un numero n, a continuacion, lo eleve al cudrado y muestre el valor

#include<stdio.h>
#include<math.h>

int main(){
    float num, operacion;
    printf("Ingrese un valor:");
    scanf("%f", &num);

    operacion = pow(num,2);
    printf("El numero al cuadrado es: %f", operacion);
    return 0;
}