#include <stdio.h>

int main(){

    int a, *b;

    printf("%d\n",a);

    a = 0;
    printf("%d\n",a);

    printf("%d\n",b);
    b = 0;
    printf("%d\n",b);

    *b = a;    
    printf("%d\n",*b);    
    return 0;
}