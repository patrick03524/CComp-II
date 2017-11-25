#include "Nodo.h"

Nodo::Nodo()
{
    next=NULL;
}
Nodo::Nodo(T valor, Nodo *siguiente=NULL){
    this -> value = valor;
    this -> next = siguiente;
}
template<typename T>
void node<T>::imprimir_nodo(){
	cout <<"Valor : "<<value<<" Siguiente -> ";
}
