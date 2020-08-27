#include<iostream>
#include<stdlib.h>
#include "Nodo.h"


using namespace std;

class Arbol
{
private:
    Nodo* root;

public:
    Arbol();
    ~Arbol();
    bool isEmpty();
    Nodo* getRoot();
    bool isRoot(Nodo *);
    bool isLeaf(Nodo *); /// ES hoja
    bool isInternal(Nodo *); // Es un nodo intermedio
    Nodo* addRecursivo(Nodo *,int);
    Nodo* addIterativo(int);
    void preOrden(Nodo *);
    void inOrden(Nodo *);
    void postOrden(Nodo *);

};

