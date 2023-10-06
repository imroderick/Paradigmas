#include "Producto.h"
#include "Vector.h"
#include <iostream>
using namespace std;

int main() {

	// Creo un objeto producto con el constructor parametrizado
	Producto P1("Producto de prueba1", 1000);
	Producto P2("Producto de prueba2", 2000);

	// Creo un objeto vector con el constructor parametrizado
	Vector V(2);

	// Agrego los elementos P1 y P2 al vector V
	V.AgregarProducto(&P1);
	V.AgregarProducto(&P2);

	// Muestro la informacion del vector
	V.MostrarInformacion();
	// 	cout<<"CORRECTO - La Fila esta vacia"<<endl;
	// else
	// 	cout<<"ERROR - La Fila deberia estar vacia"<<endl;

	return 0 ;
}