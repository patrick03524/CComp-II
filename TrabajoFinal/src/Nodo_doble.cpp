#include "Nodo_doble.h"

Nodo_doble::Nodo_doble()
{
    next=NULL;
    prev=NULL;
}
Nodo_doble::Nodo_doble(T valor, node *siguiente=NULL, node *anterior=NULL)
{
    this -> value = valor;
    this -> next = siguiente;
    this -> prev = anterior;
}
template<typename T>
void node<T>::imprimir_nodo(){
	cout <<prev<<" <- "<<"Valor : "<<value<<" Siguiente -> ";
}
