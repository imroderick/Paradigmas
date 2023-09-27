#pragma once
#include <iostream>
#include "Nodo.h"
using namespace std;

class Fila
{
private:
    Nodo *frente;
    Nodo *final;
    int longitud;
public:
    Fila();
    ~Fila();

    bool EsFilaVacia();
    item Frente();
    void Enfila(item valor);
    void Defila();
    int Longitud();
    bool Pertenece(item valor);
};