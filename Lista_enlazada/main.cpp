
#include <Lista_enlazada.h>
int main ()
{
    Lista_enlazada primer_nodo, segundo_nodo;
	primer_nodo.add_nodo(9);
	primer_nodo.add_nodo(7);
	primer_nodo.add_nodo(8);
	primer_nodo.add_nodo(1);
	primer_nodo.print();
    segundo_nodo.add_nodo(16);
	segundo_nodo.add_nodo(5);
	segundo_nodo.add_nodo(24);
	segundo_nodo.add_nodo(7);
	segundo_nodo.add_nodo(13);
	segundo_nodo.print();
	cout <<"Lista Concatenada : ";
	primer_nodo.concatenar(segundo_nodo);
	primer_nodo.print();

	return 0;
}
