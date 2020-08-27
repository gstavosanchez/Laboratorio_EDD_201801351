#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include "Arbol.h"
using namespace std;

int main(){

    cout<<"Hola mundo "<<endl;
    

    Arbol* arbolBinario = new Arbol();


    arbolBinario->addRecursivo(arbolBinario->getRoot(),8);
    arbolBinario->addRecursivo(arbolBinario->getRoot(),4);
    arbolBinario->addRecursivo(arbolBinario->getRoot(),10);
    arbolBinario->addRecursivo(arbolBinario->getRoot(),12);
    arbolBinario->addRecursivo(arbolBinario->getRoot(),1);
    

    arbolBinario->postOrden(arbolBinario->getRoot());


    getch();
    return 0 ;
}

