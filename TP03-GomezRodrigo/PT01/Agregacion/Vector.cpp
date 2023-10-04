#include "iostream"
#include "Vector.h"
using namespace std;

Vector::Vector(int _maximo) : indice(0)
{
    if (reservarMemoria(_maximo))
    {
        maximo = _maximo;
    }else{
        maximo = 0;
    }
}

bool Vector::reservarMemoria(int tamanio)
{
    *productos = new Producto[tamanio];
    if (!productos)
    {
        cerr << "Memoria insuficiente." << endl;
        return false;
    }else{
        return true;
    }
}

Vector::~Vector(){delete productos;}

int Vector::GetCapacidad()
{
    return maximo;
}

void Vector::AgregarProducto(Producto *producto)
{
    *(productos+indice) = producto;
    indice++;
}

Producto Vector::operator[](int posicion)
{
    return **(productos+posicion);
}
