#pragma once
#include "Fecha.h"
#include "Capitulo.h"
#define MaximoCapitulos 50

class Temporada
{
private:
    Fecha fechaProduccion;
    Fecha fechaEstreno;
    Capitulo *listadoCapitulos[MaximoCapitulos];
    int indice;
public:
    Temporada();
    Temporada(Fecha _fechaProduccion, Fecha _fechaEstreno);
    ~Temporada();

    void agregarCapitulo(string _titulo, Persona _director, int _duracion, string _sinopsis);
};