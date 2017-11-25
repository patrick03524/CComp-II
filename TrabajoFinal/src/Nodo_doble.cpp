#include "Nodo_doble.h"
template<typename T>
Nodo_doble<T>::Nodo_doble()
{
    next=NULL;
    prev=NULL;
}
template<typename T>
Nodo_doble<T>::Nodo_doble(T valor, Nodo_doble *siguiente, Nodo_doble *anterior)
{
    this -> value = valor;
    this -> next = siguiente;
    this -> prev = anterior;
}
template<typename T>
void Nodo_doble<T>::imprimir_nodo(){
	cout <<prev<<" <- "<<"Valor : "<<value<<" Siguiente -> ";
}
