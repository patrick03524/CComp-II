#include "Lista_doble.h"

Lista_doble::Lista_doble()
{
    head = NULL;
    tail = NULL;
}
template<typename T>
void lista_doble<T>::agregar_al_inicio(T nuevo_valor){
	///Comprobar que el elemento ya esta
	node<T> *new_nodo = new node<T>(nuevo_valor);
	node<T> *temp = head;
	if(!head){
		head=tail=new_nodo;
	}
	else{
		while(!head->next){
			head = new_nodo;
			new_nodo->next = temp; //Problema solo agrega hasta el 2do nodo
			temp=temp->next;
		}
	}
}
