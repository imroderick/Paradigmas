#include "Fila.h"

Fila::Fila() : frente(nullptr), final(nullptr), longitud(0){}

Fila::~Fila(){}

bool Fila::EsFilaVacia()
{
    return frente == nullptr && final == nullptr;
}

item Fila::Frente()
{
    return frente->dato;
}

void Fila::Enfila(item valor)
{
    Nodo *nuevoNodo = new Nodo(valor);
    if(EsFilaVacia()){
        frente = nuevoNodo;
        final = nuevoNodo;
    }else{
        final->siguiente = nuevoNodo;
    }
}

void Fila::Defila()
{
    Nodo* nodoAuxiliar;
    if (!EsFilaVacia())
    {
        nodoAuxiliar = frente;
        if (longitud == 1)
        {
            frente = nullptr;
            final = nullptr;
        }else{
            frente = frente->siguiente;
        }
        delete nodoAuxiliar;
    }
}

int Fila::Longitud()
{
    return longitud;
}

bool Fila::Pertenece(item valor)
{
    return false;
}
