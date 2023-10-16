#pragma once
#include <iostream>
#include "Persona.h"
using std::string, std::cin, std::cout, std::endl;

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

