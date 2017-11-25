
#include <Lista_enlazada.h>

Lista_enlazada Josephus(int muertos, int soldados){
	Lista_enlazada A;
	for (int i = 1; i <= soldados; i++)
	A.append(i);
	int sold_dead = (muertos-1) % soldados;
	for (soldados; soldados > 2; soldados--){
	//if (soldados == 3) break;
	A.borrar(sold_dead);
	sold_dead = sold_dead + (muertos-1);
	sold_dead = sold_dead % (soldados-1);
	}
	return A;
}
int main ()
{
    Lista_enlazada A, B;
	//Lista_enlazada A;
	A.append(1);
	A.append(4);
	A.append(8);
	A.append(9);
	A.append(10);
	A.append(11);
	//A->append(5);
	//A->append(2);
	//A->append(4);
	A.print();
	B.append(2);
	B.append(3);
	B.append(5);
	B.append(7);
	B.append(15);
	B.append(16);
	B.append(18);
	B.print();
	//C = A + B;
	//A += B;
	A.concatenar(B);
	A.print();
	Lista_enlazada Jos;
	Jos = Josephus(3, 40);
	cout << "Quedan los soldados: ";
	Jos.print();
	//delete A;
	return 0;
}
