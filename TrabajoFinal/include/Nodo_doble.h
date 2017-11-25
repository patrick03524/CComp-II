#ifndef NODO_DOBLE_H
#define NODO_DOBLE_H

template<typename T>
class Nodo_doble
{
public:
    T value;
	node<T> *next;
	node<T> *prev;
	node();
	node(T valor, node *siguiente=NULL, node *anterior=NULL);
	void imprimir_nodo();
};

#endif // NODO_DOBLE_H
