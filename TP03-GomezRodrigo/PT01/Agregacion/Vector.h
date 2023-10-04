#pragma once
#include "iostream"
#include "Producto.h"
class Vector
{
private:
    int maximo;
    int indice;
    Producto **productos;
    bool reservarMemoria(int tamanio);
public:
    Vector(int _maximo);
    ~Vector();

    int GetCapacidad();
    void AgregarProducto(Producto *producto);
    Producto operator[](int posicion);
};