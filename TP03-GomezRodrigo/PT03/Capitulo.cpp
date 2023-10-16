#include "Capitulo.h"

Capitulo::Capitulo(){}

Capitulo::Capitulo(string _titulo, Persona _director, int _duracion, string _sinopsis) : titulo(_titulo), director(_director), duracion(_duracion), sinopsis(_sinopsis){}

Capitulo::Capitulo(const Capitulo &copia) : titulo(copia.titulo), director(copia.director), duracion(copia.duracion), sinopsis(copia.sinopsis){}

Capitulo::~Capitulo(){}