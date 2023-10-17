#include <iostream>
#include "Temporada.h"
using namespace std;

int main()
{
    Persona *directorPrueba = new Persona("Nombre owo", "Biografia uwu", 30);
    Capitulo *capituloPrueba = new Capitulo("Capitulo de prueba", *directorPrueba, 300, "Alguna sinopsis");
    Fecha fecha1(1,2,2003);
    Fecha fecha2(4,5,2006);
    Temporada *temporadaPrueba = new Temporada(fecha1, fecha2);
    temporadaPrueba->agregarCapitulo("Capitulo de prueba", *directorPrueba, 300, "Alguna sinopsis");
    string biografia = directorPrueba->GetBiografia();
    cout << biografia << endl;
}
