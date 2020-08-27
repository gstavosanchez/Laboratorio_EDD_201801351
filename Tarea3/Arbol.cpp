#include<iostream>
#include<stdlib.h>
#include "Nodo.h"
#include "Arbol.h"


using namespace std;

Arbol::Arbol(){
    root = NULL;
}
Arbol::~Arbol(){}

bool Arbol::isEmpty(){
    return root == NULL;
}

Nodo* Arbol::getRoot(){
    return root;
}

bool Arbol::isRoot(Nodo *nodo){
    return root == nodo;
}
bool Arbol::isLeaf(Nodo *nodo){ /// Si es una hoja osea que no tiene hijos 
    return nodo->getDerecha() == NULL && nodo->getDerecha() == NULL;
}

bool Arbol::isInternal(Nodo *nodo){ /// Si es nodo intermedio que tiene hijos
    return !isLeaf(nodo);
}

Nodo* Arbol::addRecursivo(Nodo *origne, int elemento){
    Nodo* nodo = NULL;
    if(root == NULL){
        root = new Nodo(elemento);
    }else if(origne == NULL){
        cout<<"El origen es nulo"<<endl;
    }else{
        if(elemento < origne->getElemento() ){
            if(origne->getIzquierda() != NULL){
              nodo = addRecursivo(origne->getIzquierda(),elemento);
            }else{
                nodo = new Nodo(elemento);
                nodo->setParent(origne);
                origne->setIzquierda(nodo);
            }

        }else{

            if(origne->getDerecha() != NULL){
                nodo = addRecursivo(origne->getDerecha(),elemento);
            }else{
                nodo = new Nodo(elemento);
                nodo->setParent(origne);
                origne->setDerecha(nodo);
            }

        }
    }
    return nodo;
}

Nodo* Arbol::addIterativo(int elemento){
    cout<<"Metodo con while"<<endl;
    Nodo* nodo = NULL;
    if(root == NULL){
        root = new Nodo(elemento);
        //root = nodo;
    }else{
        Nodo* aux = root;
        bool insertado = false;

        while (!insertado){
            if(elemento < aux->getElemento() ){
                cout<<"Entro a la izquierda"<<endl;
                if(aux->getIzquierda() != NULL){
                    aux = aux->getIzquierda();
                }else{
                    nodo = new Nodo(elemento);
                    nodo->setParent(aux);
                    aux->setIzquierda(nodo);
                    insertado = true;
                }

            }else{
                cout<<"Entro a la derecha"<<endl;
                if(aux->getDerecha() != NULL){
                    aux = aux->getDerecha();
                }else{
                    nodo = new Nodo(elemento);
                    nodo->setParent(aux);
                    aux->setDerecha(nodo);
                    insertado = true;
                }

            }
        }
        



    }
    return nodo;
}
void Arbol::preOrden(Nodo* nodo){
    cout<<nodo->getElemento()<<endl;

    if(nodo->getIzquierda() != NULL){ //Significa que hay un nodo en la izquierda
        this->preOrden(nodo->getIzquierda());
    }

    if(nodo->getDerecha() != NULL){ //Significa que hay un nodo en la derecha
        this->preOrden(nodo->getDerecha());
    }
}

void Arbol::inOrden(Nodo* nodo){
    
    
    if(nodo->getIzquierda() != NULL){ //Significa que hay un nodo en la izquierda
        this->inOrden(nodo->getIzquierda());
    }

    cout<<nodo->getElemento()<<endl;

    if(nodo->getDerecha() != NULL){ //Significa que hay un nodo en la derecha
        this->inOrden(nodo->getDerecha());
    }
}

void Arbol::postOrden(Nodo* nodo){
    
    
    if(nodo->getIzquierda() != NULL){ //Significa que hay un nodo en la izquierda
        this->postOrden(nodo->getIzquierda());
    }

    

    if(nodo->getDerecha() != NULL){ //Significa que hay un nodo en la derecha
        this->postOrden(nodo->getDerecha());
    }

    cout<<nodo->getElemento()<<endl;
}