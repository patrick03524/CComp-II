#ifndef LISTA_ENLAZADA_H
#define LISTA_ENLAZADA_H
#include <nodo.h>


class Lista_enlazada
{
    public:
        nodo *first;
        Lista_enlazada();
        void add_nodo(int);
        void borrar(int);
        void print();
        void concatenar(Lista_enlazada B);
};

#endif // LISTA_ENLAZADA_H
