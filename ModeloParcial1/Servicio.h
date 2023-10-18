#pragma once
#include <iostream>
using std::string;

class Servicio
{
private:
    int codigo;
    string descripcion;
    float montoBase;
    
public:
    Servicio();
    Servicio(int _codigo, string _descripcion, float _montoBase);
    Servicio(const Servicio &copia);
    ~Servicio();

    float GetMontoBase();
};