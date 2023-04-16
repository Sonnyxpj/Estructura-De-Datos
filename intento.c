#include<stdio.h>

struct punto{
    float x;
    float y;
};

struct punto leer_punto(){
    struct punto p;
    
    printf("Ingrese el valor de la coordenada (x,y)\n");
    scanf("%f %f", &p.x, &p.y);
    return p;
}

int main(){
    struct punto p1, p2, p3;

    /*printf("Ingrese el valor de x del primer punto: \n");
    scanf("%f", &p1.x);
    printf("Ingrese el valor de y del primer punto: \n");
    scanf("%f", &p1.y);

    printf("La coordenada es: (%f, %f)", p1.x, p1.y);*/

    p1 = leer_punto();
    printf("La coordenas es (%.2f, %.2f)", p1.x, p1.y);
    return 0;
}

