#pragma once
#include<iostream>
#include<stdlib.h>

using namespace std;

class Nodo
{
private:
    int dato;
    Nodo *parent;
    Nodo *izquierda;
    Nodo *derecha;
public:
    Nodo();
    Nodo(int dato);
    Nodo(int dato, Nodo *parent,Nodo *izquierda,Nodo *derecha);
    Nodo(int dato,Nodo *izquierda,Nodo *derecha);
    ~Nodo();
    void setElemento(int);
    void setParent(Nodo *);
    void setIzquierda(Nodo *);
    void setDerecha(Nodo *);
    Nodo *getParent();
    Nodo *getIzquierda();
    Nodo *getDerecha();
    int getElemento();
};
