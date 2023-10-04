#include "Fila.h"

Fila::Fila() : frente(nullptr), final(nullptr), longitud(0){}

Fila::Fila(const Fila &copia) : frente(nullptr), final(nullptr), longitud(0)
{
    Nodo* nodoAuxiliar = copia.frente;

    while (nodoAuxiliar) {
        Enfila(nodoAuxiliar->dato);
        nodoAuxiliar = nodoAuxiliar->siguiente;
    }
}

Fila::~Fila()
{
    while (!EsFilaVacia()) {
        Defila();
    }
}

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
        final = nuevoNodo;
    }
    longitud++;
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
        longitud--;
        delete nodoAuxiliar;
    }
}

int Fila::Longitud()
{
    return longitud;
}

bool Fila::Pertenece(item valor)
{
    Nodo *auxiliar = frente;
    while (auxiliar)
    {
        if (auxiliar->dato == valor)
        {
            return true;
        }
        auxiliar = auxiliar->siguiente;
    }
    return false;
}

void Fila::Mostrar()
{
    Nodo *auxiliar = frente;
    while (auxiliar)
    {
        cout << auxiliar->dato << " ";
        auxiliar = auxiliar->siguiente;
    }
    cout << endl;
}
