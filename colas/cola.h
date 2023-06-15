#include <stdlib.h>
#include <stdio.h>

struct cola{
    int clave;
    struct cola *sig;
};

typedef struct cola COLA;

void crearc(COLA **colao);
int vacia(COLA *colao);
void encolar(COLA **colao, int elem);
void desencolar(COLA **colao, int *elem);
void muestrac(COLA *colao);


void crearc(COLA **colao){

    *colao = NULL;
}

int vacia(COLA *colao){

    return (colao == NULL);
}

void encolar(COLA **colao, int elem){

    COLA *respaldo;
    respaldo =(COLA *)malloc(sizeof(COLA));
    respaldo->clave = elem;
    if(*colao == NULL){
        respaldo->sig = respaldo;
    }else{
        respaldo->sig =(*colao)->sig;
        (*colao)->sig = respaldo;
    }
    (*colao) = respaldo;
}

void desencolar(COLA **colao, int *elem){

    COLA *aux;
    *elem = (*colao)->sig->clave;
    if ((*colao) == (*colao)->sig){
        free(*colao);
        *colao == NULL;
    }else{
        aux = (*colao)->sig;
        (*colao)->sig = aux->sig;
        free(aux);
    }
}

void muestrac(COLA *colao){

    COLA *aux;
    aux = colao;
    printf("\n\nCola :");
    if(aux == NULL){
        printf(" Vacia\n");
    }else{
        aux = colao->sig;
        do{
            printf("%d - ", aux->clave);
            aux = aux->sig;
        }while (aux != colao->sig);
        printf("\n");
    }
}