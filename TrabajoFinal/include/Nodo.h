#ifndef NODO_H
#define NODO_H
#include <iostream>

using namespace std;
template<typename T>
class Nodo
{
    public:
        T value;
        Nodo<T> *next;
        Nodo();
        Nodo(T valor, Nodo *siguiente=NULL);
        void imprimir_nodo();
};

#endif // NODO_H
