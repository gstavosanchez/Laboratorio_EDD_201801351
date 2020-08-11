#include "Nodo.h"

void setDerecha(Nodo* aux, Nodo* nuevo){
    aux->derecha = nuevo;
}
void setIzquierda(Nodo* aux,Nodo* nuevo){
    aux->izquierda = nuevo;
}

Nodo* newNodo(int val){
    Nodo* nuevo = (Nodo*) malloc(sizeof(Nodo));
    nuevo->derecha = NULL;
    nuevo->izquierda = NULL;
    nuevo->val = val;
    return nuevo;
}