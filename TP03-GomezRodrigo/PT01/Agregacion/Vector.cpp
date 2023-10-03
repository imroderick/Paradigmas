#include "iostream"
#include "Vector.h"

Vector::Vector(int _maximo) : maximo(_maximo)
{
    reservarMemoria(maximo);
}

void Vector::reservarMemoria(int tamanio)
{
    productos = new Producto*[tamanio];
}


Vector::~Vector(){delete productos;}

int Vector::getCapacidad()
{
    return maximo;
}

Producto Vector::operator[](int posicion)
{
    return **(productos+posicion); 
}
