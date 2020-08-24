#include<iostream>
#include<stdlib.h>
#include "Nodo.h"

using namespace std;

Nodo::Nodo(){
    dato = 0;
    derecha = NULL;
    izquierda = NULL;
    parent = NULL;
}
Nodo::Nodo(int _dato){
    dato = _dato;
    derecha = NULL;
    izquierda = NULL;
    parent = NULL;
}
Nodo::Nodo(int _dato, Nodo* _derecha, Nodo* _izquierda){
    dato = _dato;
    derecha = _derecha;
    izquierda = _izquierda;
    parent = NULL;
}
Nodo::Nodo(int _dato,Nodo* _parent ,Nodo* _derecha, Nodo* _izquierda){
    dato = _dato;
    parent = _parent;
    derecha = _derecha;
    izquierda = _izquierda;
}
Nodo::~Nodo(){}
void Nodo::setElemento(int _dato){
    dato =_dato;
}
void Nodo::setDerecha(Nodo *_derecha){
    derecha = _derecha;
}
void Nodo::setIzquierda(Nodo *_izquierda){
    izquierda = _izquierda;
}
void Nodo::setParent(Nodo *_parent){
    parent = _parent;
}

int Nodo::getElemento(){
    return dato;
}
Nodo *Nodo::getDerecha(){
    return derecha;
}
Nodo *Nodo::getIzquierda(){
    return izquierda;
}