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
template<typename T>
void  lista_doble<T>::imprimir_lista(){
	node<T> *temp = head;
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

int main(int argc, char *argv[]) {
	//template<typename T>
	lista_doble<int> my_lista;
	/*Agregar otro metodo con el que se pueda agregar al final
	otro que solo es el encargado de ordenar la lista, otro que borre
	un nodo y lo demas*/
	my_lista.agregar_al_inicio(2);
	my_lista.agregar_al_inicio(3);
	//my_lista.agregar_al_inicio(5);
	//my_lista.agregar_al_inicio(7);
	my_lista.imprimir_lista();
	return 0;
}


