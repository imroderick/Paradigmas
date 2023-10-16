#pragma once
#include "iostream"
using std::string, std::cin, std::cout, std::endl;

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

    string GetNombre();
    string GetBiografia();
    int GetEdad();
};
