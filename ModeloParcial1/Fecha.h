#pragma once
#include <iostream>
using namespace std;

class Fecha
{
private:
    int dia;
    int mes;
    int anio;
public:
    Fecha();
    Fecha(int _dia, int _mes, int _anio);
    Fecha(const Fecha &copia);
    ~Fecha();

    int GetDia();
    int GetMes();
    int GetAnio();
    void MostrarFecha();
};