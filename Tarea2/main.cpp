#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include "Arbol.h"
using namespace std;

int main(){

    cout<<"Hola mundo "<<endl;
    

    Arbol* arbolBinario = new Arbol();


    //arbolBinario->addRecursivo(arbolBinario->getRoot(),8);
    //arbolBinario->addRecursivo(arbolBinario->getRoot(),4);
    arbolBinario->addIterativo(8);
    arbolBinario->addIterativo(15);
    arbolBinario->addIterativo(4);
    
    //arbolBinario->addIterativo(4);
    //arbolBinario->addIterativo(1);

    cout<<arbolBinario->getRoot()->getElemento()<<endl;


    getch();
    return 0 ;
}

