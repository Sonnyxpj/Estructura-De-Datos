#include <stdlib.h>
#include <stdio.h>

struct lista{
    int clave; //contenido del nodo
    struct lista *sig; //puntero hacia el siguiente nodo
};

void crea_lista(struct lista **L);//funcion que recive una &variable, y creara una lista de nombre variable
void add_inicio(struct lista **L, int elem);
void recorre(struct lista **L);
void add_final(struct lista **L, int elem);
void add_medio(struct lista **L,int posicion, int elem);
void del_inicio(struct lista **L);
void del_final(struct lista **L);
void del_medio(struct lista **L,int posicion);
int largo(struct lista **L);

void crea_lista(struct lista **L){
    *L = (struct lista *) malloc(sizeof(struct lista)); //se crea una estructura en la memoria seleccionada por malloc
    *L = NULL; //se limpia el espacio en memoria que se le asigno
}

void add_inicio(struct lista **L, int elem){
    struct lista *p;//crea un puntero que apunta a la estructura p
    p = (struct lista *) malloc(sizeof(struct lista));//se le asigna un espacio en memoria a la estructura p
    p->clave = elem;//se le asigna el valor elem a la subvariable "clave" de p
    p->sig = *L;//se le asigna a la subvariable "sig" de p la direccion de memoria de L, si la lista esta vacia L es NULL, porlotanto el primer elemento apuntaria a NULL
    *L = p;//se le asigna a la estructura L el contenido de p
    free(p);
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
    struct lista *p;//se crea un puntero que apunta a la estructura p
    struct lista *q;//se crea un puntero que apunta a la estructura q
    q = (struct lista *) malloc(sizeof(struct lista));//se le asigna un espacio en memoria a la estructura q
    q->clave = elem;//se le asigna a la subvariable de clave de q el valor del elem ingresado a la funcion
    q->sig = NULL;//como se agrega este nodo al final, este apuntara a NULL, porlotanto se le asigna NULL a la subvariable sig de q

    if (*L == NULL){//pregunta si la lista L esta vacia
        *L = q;//si esta vacia se le asiga a la lista L el contenido de la estructura q
    } else {
        p = *L;//se copia el contenido de L a la variable p para recorrer la lista sin modificar el valor de L
        while (p->sig != NULL) {//mientras que la variable sig no apunte a NULL
            p = p->sig;//la variable p se sobreescribe para que sea el nodo al cual apuntaba
        }
        p->sig = q;//una vez que el while termine estaremos en el final de la lista, al cual se le asigna a su subvariable sig la direccion de q para que "q" pase a ser el ultimo nodo de la lista    
        }
}

void del_inicio(struct lista **L){
    struct lista *p;//se crea una struct p
    p = (*L)->sig;//se copia el contenido de L-sig en la estructura p, haciendo que p tenga el contenido del segundo nodo de la lista
    free(*L);//se libera la memoria usada por el primer nodo de la lista original
    *L = p;//se le asigna al primer nodo de la lista el contenido de p
}

void del_final(struct lista **L){
    struct lista *p, *q;//se crean dos estructuras p y q
    p = *L;//se le asigna a p el contenido de L, haciendo que ambas sean el primer nodo de la lista
    while (p->sig != NULL){//pregunta si el nodo diguiente a p es NULL, el bucle se ejecutara hasta el ultimo nodo
        q = p;//se copia el contenido de p a q
        p = p->sig;//se le asigna a p el contenido de su nodo siguiente
    }
    q->sig = NULL;//se le asigna a el nodo siguiente de q como NULL, convirtiendo a q en el ultimo nodo de la lista
    free(p);//se livera el espacio de memoria de p, anterior ultimo nodo
}

int largo(struct lista **L){
    struct lista *p;
    int contador = 1;
    p = *L;
    if(*L != NULL){
    while (p->sig != NULL){
        contador = contador + 1;
        p = p->sig;
    }
    return contador;
    }
    else{
        return 0;
    }
}

void del_medio(struct lista **L,int posicion){
    struct lista *p, *q;
    int contador=0;
    p = *L;
    if(largo(L) < posicion){
        printf("La lista no tiene tantas posiciones.\n");
    }else{
        while(p->sig != NULL && posicion > contador){
            q = p;
            p = p->sig;
            contador = contador + 1;
        }
        q->sig = p->sig;
        free(p);
    }
}

void add_medio(struct lista **L,int posicion, int elem){
    struct lista *a, *b, *c;
    c = (struct lista *) malloc(sizeof(struct lista));
    int contador = 0;
    a = *L;
    c->clave = elem;
    c->sig = NULL;
    if(largo(L) < posicion){
        printf("La lista no tiene tantas posiciones.\n");
        free(c);
        return;
    }    
    if (*L == NULL || posicion == 0) {  // Caso de lista vacía o posición 0
        c->sig = *L;
        *L = c;
        return;
    }
        while((contador < posicion)){
            b = a;
            a = a->sig;
            contador = contador + 1;
        }
        b->sig = c;
        c->sig = a;
}