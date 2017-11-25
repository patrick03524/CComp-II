#include <iostream>
#include <Lista_enlazada_circular.h>
using namespace std;


Lista_enlazada_circular josesitoephus(int muertos, int soldados){
	Lista_enlazada_circular A;
	for (int i = 0; i < soldados; i++)
		A.add_nodo(i);
	int sold_dead = muertos-1;
	for (soldados; soldados > 2; soldados--){
		if (soldados == 3)
            break;
		A.borrar(sold_dead);
		sold_dead = sold_dead + (muertos-1);
		cout << "soldado muerto: " << sold_dead << endl;
		cout << "soldados: " << soldados-1 << endl;
		sold_dead = sold_dead % (soldados-1);
		cout << "soldados muertos mod soldados: " << sold_dead << endl;
	}
	return A;
}

int main(int argc, char *argv[]) {
	Lista_enlazada_circular josesito;
	josesito.add_nodo(1);
	josesito.print();
	josesito.add_nodo(3);
	josesito.print();
	josesito.add_nodo(5);
	josesito.print();
	josesito = josesitoephus(3, 9);
	josesito.print();
	return 0;
}
