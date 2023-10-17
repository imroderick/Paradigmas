#pragma once
#include "Temporada.h"
#define MaximoTemporada 50
#define MaximoActores 50
using namespace std;

class Serie
{
private:
    string titulo;
    int anioDeInicio;
    string sinopsis;
    string genero;
    Temporada *listadoTemporada[MaximoTemporada];
    Persona *listadoActores[MaximoActores];
    int indiceTemporadas;
    int indiceActores;
public:
    Serie();
    Serie(string _titulo, int _anioDeInicio, string _sinopsis, string _genero);
    ~Serie();

    void AgregarTemporada(Fecha _fechaProduccion, Fecha fechaEstreno);
    void AgregarActor(Persona *actor);
};