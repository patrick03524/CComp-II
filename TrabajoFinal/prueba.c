#include <iostream>
using namespace std;
template<typename T>
class node{
public:
	T value;
	node<T> *next;
	node<T> *prev;
	node(){
		next=NULL;
		prev=NULL;
	}
	node(T valor, node *siguiente=NULL, node *anterior=NULL){
		this -> value = valor;
		this -> next = siguiente;
		this -> prev = anterior;
	}
	void imprimir_nodo();
};
template<typename T>
void node<T>::imprimir_nodo(){
	cout <<prev<<" <- "<<"Valor : "<<value<<" Siguiente -> ";
}
template<typename T>
class lista_doble{
public:
	node<T> *head;
	node<T> *tail;
	lista_doble(){
		head = NULL;
		tail = NULL;
	}
	void agregar_al_inicio(T);
	void ordenar_lista();
	void imprimir_lista();
};
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
/*template<typename T>
void lista_doble<T>::ordenar_lista(){

}*/


int main(int argc, char *argv[]) {

	return 0;
}


