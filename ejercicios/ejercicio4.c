
#include <stdio.h>


int main(){

    int edad;
    printf("Ingresa tu edad \n");
    scanf("%d", &edad);
    if (edad >=18){
        printf("Eres mayor de edad :D \n");
    }

    else if(edad == 17){
        printf("sorry bro casi eres mayor de edad");
    }
    
    else{
        printf("Eres menor de edad :( \n");
    }
    
    return 0;

}