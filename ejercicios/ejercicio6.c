
#include <stdio.h>

int main(){

    char C = 'y'; // tamaño de 1 byte [0,225]
    int a = 20; //2 bytes [-32768,32767]
    short e = -1; //2 bytes [-128,128]
    unsigned int u = 25; //2 bytes [0,65535]
    long l = 5932; //4 bytes [-214783648,214783647]
    float f = 72.534; //4 bytes
    double d = 12323.877658; //8 bytes

    printf("%c \n", C );
    printf("%d\n", a );
    printf("%i\n", e );
    printf("%i \n", u );
    printf("%li\n", l );
    printf("%f\n", f);
    printf("%f", d);

    return 0;
}