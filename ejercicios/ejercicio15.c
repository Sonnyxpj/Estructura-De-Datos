#include <stdio.h>

int suma(int num1, int num2, int num3);
int num3 = 2;
int main(){

    int num1, num2;

    printf("Ingresa el primer valor\n");
    scanf("%i", &num1);
    printf("Ingrese el segundo valor\n");
    scanf("%i", &num2);
    printf("El resultado es: %i\n", suma(num1, num2, num3));

    return 0;

}

int suma(int num1, int num2, int num3){

    int suma = num1 + num2 + num3;
    return suma;
}