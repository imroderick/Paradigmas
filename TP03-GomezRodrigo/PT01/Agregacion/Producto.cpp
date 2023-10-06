#include "Producto.h"
#include <iostream>
using namespace std;

int Producto::autonumerico = 0;

Producto::Producto() : IVA(1.21){}

Producto::Producto(string _descripcion, float _precioBase) : IVA(1.21)
{
    codigo = autonumerico;
    autonumerico++;
    descripcion = _descripcion;
    precioBase = _precioBase >= 0 ? _precioBase : 0;
}

Producto::~Producto(){}

void Producto::ListarInformacion()
{
    cout << "--------INFORMACIÓN DEL PRODUCTO: " << codigo << "--------" << endl;
    cout << "Descripcion: " << descripcion << endl;
    cout << "Precio base: " << precioBase << endl;
    cout << "Precio final con IVA: " << CalcularPrecioDeVenta() << endl; 
    cout << "-----------FIN DE LA INFORMACIÓN-----------" << endl;
}

float Producto::CalcularPrecioDeVenta()
{
    float precioFinal = 0;
    precioFinal = precioBase * IVA;
    return precioFinal;
}