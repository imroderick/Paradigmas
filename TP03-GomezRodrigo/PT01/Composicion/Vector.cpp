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
    productos = new Producto *[tamanio];
    if (!productos)
    {
        cerr << "Memoria insuficiente." << endl;
        return false;
    }else{
        return true;
    }
}

Vector::~Vector()
{
    for (size_t i = 0; i < indice; i++)
    {
        delete (*(productos+i));
    }
    delete productos;
}

int Vector::GetCapacidad()
{
    return maximo;
}

void Vector::AgregarProducto(string _descripcion, float _precioBase)
{
    if (indice > maximo)
    {
        cerr << "No hay más espacio disponible en el vector." << endl;
    }else{
        *(productos+indice) = new Producto(_descripcion, _precioBase);
        indice++;
    }    
}

Producto Vector::operator[](int posicion)
{
    return **(productos+posicion);
}

void Vector::MostrarInformacion()
{
    cout << "El vector tiene una longitud de: " << indice << endl;
    cout << "El vector tiene una capacidad máxima de: " << maximo << endl;
    for (size_t i = 0; i < indice; i++)
    {
        (*(productos+i))->ListarInformacion();
    }
}
