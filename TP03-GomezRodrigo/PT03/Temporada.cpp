#include "Temporada.h"

Temporada::Temporada() : indice(0){}


Temporada::Temporada(Fecha _fechaProduccion, Fecha _fechaEstreno) : fechaProduccion(_fechaProduccion), fechaEstreno(_fechaEstreno), indice(0){}

Temporada::~Temporada()
{
    for (size_t i = 0; i < indice; i++)
    {
        delete listadoCapitulos[i];
    }
}

void Temporada::agregarCapitulo(string _titulo, Persona _director, int _duracion, string _sinopsis)
{
    Capitulo *nuevoCapitulo = new Capitulo(_titulo, _director, _duracion, _sinopsis);
    listadoCapitulos[indice] = nuevoCapitulo;
    indice++;
}
