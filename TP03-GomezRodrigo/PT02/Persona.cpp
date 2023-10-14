#include "Persona.h"
#include <iostream>
using namespace std;

Persona::Persona(string _nombre, string _biografia, int _edad) : nombre(nombre), biografia(_biografia), edad(_edad) {}

Persona::Persona(const Persona &copia) : nombre(copia.nombre), biografia(copia.biografia), edad(copia.edad){}

Persona::~Persona(){}

void Persona::MostrarInformacion()
{
    cout << "Nombre: " << nombre << endl;
    cout << "Biografia: " << biografia << endl;
    cout << "Edad: " << edad << endl;
}