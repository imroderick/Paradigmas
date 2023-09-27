#include "Fila.h"

Fila::Fila()
{
    frente = nullptr;
    final = nullptr;
    longitud = 0;
}

Fila::~Fila(){}

bool Fila::EsFilaVacia()
{
    return this->frente == nullptr && this->final == nullptr;
}

item Fila::Frente()
{
    return this->frente->Dato();
}

void Fila::Enfila(item valor)
{
}

void Fila::Defila()
{
}

int Fila::Longitud()
{
    return this->longitud;
}

bool Fila::Pertenece(item valor)
{
    return false;
}
