#pragma once
#include "iostream"
using namespace std;

class Producto
{
private:
    static int autonumerico;
    int codigo;
    string descripcion;
    float precioBase;
    float const IVA;
public:
    Producto();
    Producto(string _descripcion, float _precioBase);
    ~Producto();

    void ListarInformacion();
    float CalcularPrecioDeVenta();
};