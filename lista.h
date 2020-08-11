#pragma once
#include<stdlib.h>
#include<stdio.h>
#include "Nodo.h"


typedef struct lista{
    Nodo* head;
}Lista;

Lista* nuevaLista();
void add(Lista* l, Nodo* nuevo);
void imprimir(Lista* l);
int getValor(int posicion,Lista* l);
Nodo* getNodo(int posicion,Lista* l);
void deleteNodo(int posicion,Lista* l);
int getPosUltimo(Lista* l);
void generar(Lista* l);
void guardarRecursivo(Nodo* aux,FILE *fp,char *c);