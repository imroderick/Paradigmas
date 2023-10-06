#include "Producto.h"
#include "Vector.h"
#include <iostream>
using namespace std;

int main() {

	// Creo un objeto vector con el constructor parametrizado
	Vector V(2);

	// Agrego los elementos P1 y P2 al vector V
	V.AgregarProducto("Producto de prueba1", 1000);
	V.AgregarProducto("Producto de prueba2", 2000);

	// Muestro la informacion del vector
	V.MostrarInformacion();

	return 0 ;
}