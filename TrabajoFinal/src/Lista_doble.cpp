#include "Lista_doble.h"
template<typename T>
Lista_doble<T>::Lista_doble()
{
    head = NULL;
    tail = NULL;
}
template<typename T>
void Lista_doble<T>::agregar_al_inicio(T nuevo_valor){
	///Comprobar que el elemento ya esta
	Nodo<T> *new_nodo = new Nodo<T>(nuevo_valor);
	Nodo<T> *temp = head;
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
template<typename T>
void  Lista_doble<T>::imprimir_lista(){
	Nodo<T> *temp = head;
	if(!head){
		cout <<"Lista Vacia"<<endl;
	}
	else{
		while(temp){
			temp->imprimir_nodo();
			if(!temp -> next){
				cout <<"NULL";
			}
			temp = temp->next;
		}
	}
	cout <<endl;
}
