#include<iostream>
#include<stdlib.h>

#include "Arbol.h"
using namespace std;

int main(){

    cout<<"Hola mundo "<<endl;
    

    Arbol* arbolBinario = new Arbol();


    arbolBinario->addRecursivo(arbolBinario->getRoot(),10);
    arbolBinario->addRecursivo(arbolBinario->getRoot(),1);
    arbolBinario->addRecursivo(arbolBinario->getRoot(),20);
    arbolBinario->addRecursivo(arbolBinario->getRoot(),15);
    arbolBinario->addRecursivo(arbolBinario->getRoot(),8);
    arbolBinario->addRecursivo(arbolBinario->getRoot(),96);
    arbolBinario->addRecursivo(arbolBinario->getRoot(),23);
    arbolBinario->addRecursivo(arbolBinario->getRoot(),4);
    arbolBinario->addRecursivo(arbolBinario->getRoot(),7);
    arbolBinario->addRecursivo(arbolBinario->getRoot(),32);

    arbolBinario->postOrden(arbolBinario->getRoot());
    cout<<"\n";
    arbolBinario->inOrden(arbolBinario->getRoot());
    cout<<"\n";
    arbolBinario->preOrden(arbolBinario->getRoot());


    
    return 0 ;
}

