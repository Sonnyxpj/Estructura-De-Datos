#include<stdio.h>

struct punto{
    float x;
    float y;
};

float l_punto();

/*
struct punto leer_punto(){
    struct punto p;
    
    printf("Ingrese el valor de la coordenada (x,y)\n");
    scanf("%f %f", &p.x, &p.y);
    return p;
}

int main(){
    struct punto p1, p2, p3;

    p1 = leer_punto(p);
    printf("La coordenas es (%.2f, %.2f)", p1.x, p1.y);
    return 0;
}
*/

int main(){
    struct punto p1; 

    p1 = l_punto(punto);
}


float l_punto(punto){

    printf("Ingrese el valor de la coordenada (x,y)\n");
    scanf("%f %f", &punto.x, &punto.y);
    return p;
}