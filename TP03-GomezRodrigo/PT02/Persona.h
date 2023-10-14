#pragma once
#include "iostream"
using namespace std;


class Persona
{
private:
    string nombre;
    string biografia;
    int edad;
public:
    Persona(string _nombre, string _biografia, int _edad);
    Persona(const Persona &copia);
    ~Persona();

    void MostrarInformacion();
};
