#include "Fecha.h"
#include <iostream>
using std::string, std::cin, std::cout, std::endl;

Fecha::Fecha(){}

Fecha::Fecha(int _dia, int _mes, int _anio) : dia(_dia), mes(_mes), anio(_anio){}

Fecha::Fecha(const Fecha &copia) : dia(copia.dia), mes(copia.mes), anio(copia.anio){}

Fecha::~Fecha(){}

int Fecha::GetDia(){ return dia; }

int Fecha::GetMes(){ return mes; }

int Fecha::GetAnio(){ return anio; }