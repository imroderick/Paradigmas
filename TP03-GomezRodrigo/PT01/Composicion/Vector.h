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
    void AgregarProducto(string _descripcion, float _precioBase);
    Producto operator[](int posicion);
    void MostrarInformacion();
};