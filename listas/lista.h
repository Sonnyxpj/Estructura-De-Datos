#include <stdlib.h>
#ifndef _STIOH_
#define _STIOH_
#include <stdio.h>
#endif

struct lista{
    int clave;
    struct lista *sig;
};

void crea_lista(struct lista **L);
void add_inicio(struct lista **L, int elem);
void recorre(struct lista **L);
void add_final(struct lista **L, int elem);
void del_inicio(struct lista **L);
void del_final(struct lista **L);

void crea_lista(struct lista **L){
    *L = (struct lista *) malloc(sizeof(struct lista)); 
    *L = NULL;
}

void add_inicio(struct lista **L, int elem){
    struct lista *p;
    p = (struct lista *) malloc(sizeof(struct lista));
    p->clave = elem; // Agrega la informacion 
    p->sig = *L; // Reorganiza la lista 
    *L = p;   
}

void recorre(struct lista **L){
    struct lista *p;
    if (*L == NULL){
        printf("Lista Vacia...\n");
    }
    else{
        p = *L;
        while (p != NULL) {
            printf("%d, ", p->clave);
            p = p->sig;
        }
        printf("\n");
    }
}

void add_final(struct lista **L, int elem){
    struct lista *p;
    struct lista *q;
    q = (struct lista *) malloc(sizeof(struct lista));
    q->clave = elem;
    q->sig = NULL;

    if (*L == NULL) {
        *L = q;  // Si la lista está vacía, q se convierte en el primer nodo
    } else {
        p = *L;
        while (p->sig != NULL) {
            p = p->sig;
        }
        p->sig = q;  // Agregar q al final de la lista
    }
}

void del_inicio(struct lista **L){
    struct lista *p;
    p = (*L)->sig;
    free(*L);
    *L = p;
}

void del_final(struct lista **L){
    struct lista *p, *q;
    p = *L;
    while (p->sig != NULL){
        q = p;
        p = p->sig;
    }
    q->sig = NULL;
    free(p);
}