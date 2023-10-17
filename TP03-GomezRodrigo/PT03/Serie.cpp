#include "Serie.h"

Serie::Serie() : indiceActores(0), indiceTemporadas(0){}

Serie::Serie(string _titulo, int _anioDeInicio, string _sinopsis, string _genero) : titulo(_titulo), anioDeInicio(_anioDeInicio), sinopsis(_sinopsis), genero(_genero), indiceActores(0), indiceTemporadas(0){}

Serie::~Serie()
{
    for (size_t i = 0; i < indiceTemporadas; i++)
    {
        delete listadoTemporada[i]; 
    }
    
}

void Serie::AgregarTemporada(Fecha _fechaProduccion, Fecha _fechaEstreno)
{
    Temporada *nuevaTemporada = new Temporada(_fechaProduccion, _fechaEstreno);
    listadoTemporada[indiceTemporadas] = nuevaTemporada;
    indiceTemporadas++;
}

void Serie::AgregarActor(Persona *actor)
{
    listadoActores[indiceActores] = actor;
    indiceActores++;
}
