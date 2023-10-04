#pragma once
#include "iostream"
#include "Producto.h"
class Vector
{
private:
    int maximo;
    Producto **productos;
    void reservarMemoria(int tamanio);
public:
    Vector(int _maximo);
    ~Vector();

    int getCapacidad();
    Producto operator[](int posicion);
};

