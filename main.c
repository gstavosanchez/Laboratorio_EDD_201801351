#include<stdlib.h>
#include<stdio.h>
#include "Nodo.h"
#include "lista.h"
int main(){

    Nodo* a = newNodo(10);
    Nodo* b = newNodo(3);
    Nodo* c = newNodo(25);
    Nodo* d = newNodo(30);

    Lista* l = nuevaLista();
    add(l,a);
    add(l,b);
    add(l,c);
    add(l,d);


    generar(l);
    
    imprimir(l);

    printf("------------------ \n");
    deleteNodo(1,l);
    deleteNodo(2,l);

    imprimir(l);

    

    /*int valor =  getValor(1,l);
    if (valor != -1){
        printf("El valor en  buscado es: %i",valor);
    }else{
        printf("No se encontro el valor :C \n");
    } 
*/
    


    return 0;
}