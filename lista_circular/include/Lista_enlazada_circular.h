#ifndef LISTA_ENLAZADA_CIRCULAR_H
#define LISTA_ENLAZADA_CIRCULAR_H
#include <nodo.h>

class Lista_enlazada_circular
{
private:
	nodo *first;
public:
    Lista_enlazada_circular();
    void add_nodo(int);
    void borrar(int);
	void print();

};

#endif // LISTA_ENLAZADA_CIRCULAR_H
