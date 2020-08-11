#pragma once
#include<stdio.h>
#include<stdlib.h>

typedef struct Nodo
{
 struct Nodo* izquierda;
 struct Nodo* derecha;
 int val;

}Nodo;

Nodo* newNodo(int val);
void setIzquierda(Nodo* aux, Nodo* nuevo);
void setDerecha(Nodo* aux, Nodo* nuevo);