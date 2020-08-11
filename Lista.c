#include "lista.h"

    void add(Lista* l,Nodo* nuevo){
    if(l->head==NULL){
        l->head=nuevo;
    }else if(nuevo->val<=l->head->val){
        nuevo->derecha=l->head;
        l->head->izquierda=nuevo;
        l->head=nuevo;
    }else{
        Nodo* aux=l->head;
        while(aux->derecha!=NULL){
            if(aux->val>nuevo->val){
                    Nodo* ant=aux->izquierda;
                    ant->derecha=nuevo;
                    nuevo->izquierda=ant;
                    nuevo->derecha=aux;
                    aux->izquierda=nuevo;
                    return;
                }else if(nuevo->val<=aux->derecha->val){
                    Nodo *siguiente=aux->derecha;
                    aux->derecha=nuevo;
                    nuevo->derecha=aux;
                    nuevo->derecha=siguiente;
                    siguiente->izquierda=nuevo;
                    return;
                }
            aux=aux->derecha;
        }
        aux->derecha=nuevo;
        nuevo->izquierda=aux;
    }
}


void imprimir(Lista* l){
    Nodo* aux=l->head;
    while(aux!=NULL){
        printf("El valor es %i \n",aux->val);
        aux=aux->derecha;
    }
}
Lista* nuevaLista(){
    Lista* nueva=(Lista*) malloc(sizeof(Lista));
    nueva->head=NULL;
    return nueva;
}
int getValor(int posicion, Lista* l){
    int contador = 0;
    Nodo* aux=l->head;
    while (aux != NULL)
    {
        contador++;
        if(posicion == contador){
            return aux->val;
        }
        
        aux = aux->derecha;
    }
    return -1;
}

int getPosUltimo(Lista* l){
    Nodo* aux = l->head;
    int contador = 0;
    while (aux != NULL)
    {
        contador++;
        aux = aux->derecha;

    }
    return contador;
}

Nodo* getNodo(int posicion,Lista* l){
    int contador = 0;
    Nodo* aux=l->head;
    while (aux != NULL)
    {
        contador++;
        if(posicion == contador){
            return aux;
        }
        
        aux = aux->derecha;
    }
    return NULL;
}

void deleteNodo(int posicion,Lista* l){
    Nodo* buscado = getNodo(posicion,l);
    if(posicion == 1){
        Nodo* aux =  buscado->derecha;
        l->head = NULL;
        free(l->head);
        buscado = NULL;
        free(buscado);
        l->head = aux;

    }else if(getPosUltimo(l) == posicion){
        Nodo* nodAnterior = buscado->izquierda;
        nodAnterior->derecha = NULL;
        buscado = NULL;
        free(buscado);

    }else{
        Nodo* nodoAnterior = buscado->izquierda;
        Nodo* nodoSiguiente = buscado->derecha;
        buscado = NULL;
        free(buscado);
        nodoAnterior->derecha = nodoSiguiente;
        nodoSiguiente->izquierda = nodoAnterior;

    }

}