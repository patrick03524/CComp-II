#include "Nodo.h"
template<typename T>
Nodo<T>::Nodo()
{
    next=NULL;
}
template<typename T>
Nodo<T>::Nodo(T valor, Nodo *siguiente){
    this -> value = valor;
    this -> next = siguiente;
}
template<typename T>
void Nodo<T>::imprimir_nodo()
{
	cout <<"Valor : "<<value<<" Siguiente -> ";
}
