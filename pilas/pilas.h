#include <stdlib.h>
#include <stdio.h>

struct pila{
    int num;
    struct pila *sig;
};

void crearp(struct pila **pilao);
int vacia(struct pila *pilao);
void push(struct pila **pilao, int elem);
void pop(struct pila *pilao, int *elem);
void mostrarp(struct pila *pilao);


void crearp(struct pila **pilao){

    *pilao = (struct pila *) malloc(sizeof(struct pila));
    *pilao = NULL;
}

int vacia(struct pila *pilao){
    //return (pilao->sig == NULL);
    if (pilao == NULL){
        printf("Pila vacia!\n");
    }else{
        printf("Pila tiene contenido\n");
    }
    return 0;
}

void push(struct pila **pilao, int elem){               //PUSH es apilar
    struct pila *aux;
    aux = (struct pila *) malloc(sizeof(struct pila)); //asigna memoria a aux
    aux->sig = NULL;
    aux->num = elem;                                   //entrega el valor de elem a la variable num de aux
    if(*pilao == NULL){
        *pilao = aux;
    }else{
        struct pila *a;
        a = *pilao;
        while (a->sig != NULL){
            a = a->sig;
        }
        a->sig = aux;
    }
}

void pop(struct pila *pilao, int *elem){               //POP es desapilar

    struct pila *respaldo;
    respaldo = pilao->sig;                             //respalado tendra el valor de pilao->sig
    *elem = respaldo->num;                             //*elem se le pasa a respaldo->num
    pilao->sig = respaldo->sig;                        //pilao->sig va a ser lo mismo lo que contiene respaldo->sig
    free(respaldo);                                    //libera la memororia de respaldo
}

void mostrarp(struct pila *pilao){
    struct pila *p;
        if (pilao == NULL){
            printf("Lista Vacia...\n");
        }else{
            printf("Pila:  ");
            p = pilao;
            while (p != NULL) {
                printf("%d, ", p->num);
                p = p->sig;
            }
            printf("\n");
        }
}