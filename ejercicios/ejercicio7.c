#include <stdio.h>

int main(){

    int a = 80;
    float f = 45.3;
    float suma = ((float)a) + f;
    /*printf("entero %i \nflotante %.2f \ndouble %.3f\ncaracter %c", a , (float)a , (double)a , (char)a );*/

    printf("%.2f", suma);

    return 0;
}