#include <iostream>
#include <Lista_simple.h>
#include <Lista_doble.h>
#include <Lista_circular.h>
#include <Lista_doblemente_circular.h>
using namespace std;

int main()
{
    //template<typename T>
	Lista_doble<int> my_lista;
	//my_lista.imprimir_lista();
	/*Agregar otro metodo con el que se pueda agregar al final
	otro que solo es el encargado de ordenar la lista, otro que borre
	un nodo y lo demas*/
	//my_lista.agregar_al_inicio(2);
	//my_lista.agregar_al_inicio(3);
	//my_lista.agregar_al_inicio(5);
	//my_lista.agregar_al_inicio(7);
	my_lista.imprimir_lista();
    return 0;
}
