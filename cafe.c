#include<stdio.h>

int cambiar_valores(int *a, int b){
    *a=10;
    b=20;
    printf("a=%d\nb=%d\n",*a,b);
}

int main(){
    int *a, b;
    b = 4;
    a = 3;
    printf("a=%d\nb=%d\n",a,b);

    int cambiar_valores(a,b);

    printf("a=%d\nb=%d",a,b);
    return 0;
}