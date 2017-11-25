#ifndef NODO_DOBLE_H
#define NODO_DOBLE_H
#include <iostream>

using namespace std;
template<typename T>
class Nodo_doble
{
public:
    T value;
	Nodo_doble<T> *next;
	Nodo_doble<T> *prev;
	Nodo_doble();
	Nodo_doble(T valor, Nodo_doble *siguiente=NULL, Nodo_doble *anterior=NULL);
	void imprimir_nodo();
};

#endif // NODO_DOBLE_H
