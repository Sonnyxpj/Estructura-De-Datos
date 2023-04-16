#include <stdio.h>
/*
nt main(){

    int arreglo[4] = {3 , 4 , 1 , 5};

    printf("%i\n", arreglo[0]);
    printf("%i\n", arreglo[1]);
    printf("%i\n", arreglo[2]);
    printf("%i\n", arreglo[3]);

    return 0;

}
*/

/*
int main(){

    int sizeA;
    printf("Tamaño del arreglo\n");
    scanf("%i", &sizeA);
    int age[sizeA];

    for (int i = 0; i < sizeA; i++)
    {
        printf("Ingresa el valor %i\n", i+1);
        scanf("%i", &age[i]);

    }

    printf("Los valor del arreglo son\n");
    for ( int i = 0 ; i < sizeA; i++)
    {
        printf("%i-",age[i]);
    }
    
    printf("\n");
    
    return 0;

}
*/

int main(){

    int multi[2][3] = {{5 , 3 ,1},{6 , 4 ,2}};

    printf("%i", multi[1][1]);


}