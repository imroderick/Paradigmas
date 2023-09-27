#include "Nodo.h"

Nodo::Nodo(item valor)
{
    this->dato = valor;
    siguiente = nullptr;
}

Nodo::~Nodo()
{
}

item Nodo::Dato()
{
    return this->dato;
}
