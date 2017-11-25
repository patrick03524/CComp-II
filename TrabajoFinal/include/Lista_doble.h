#ifndef LISTA_DOBLE_H
#define LISTA_DOBLE_H
#include <Nodo.h>
template<typename T>
class Lista_doble
{
    public:

        Nodo<T> *head;
        Nodo<T> *tail;
        Lista_doble();
        void agregar_al_inicio(T);
        void ordenar_lista();
        void imprimir_lista();

};

#endif // LISTA_DOBLE_H
