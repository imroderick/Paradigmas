#pragma once
#include "Persona.h"
using namespace std;

class Capitulo
{
private:
    string titulo;
    Persona director;
    int duracion; //en minutos
    string sinopsis;
public:
    Capitulo();
    Capitulo(string _titulo, Persona _director, int _duracion, string _sinopsis);
    Capitulo(const Capitulo &copia);
    ~Capitulo();
};
