#include "Pelicula.h"
#include <iostream>

Pelicula::Pelicula(string _titulo, Persona _director, bool _estreno, float _precioBase, char _tipoPelicula) : codigo(autonumerico++), titulo(_titulo), director(_director), estreno(_estreno), precioBase(_precioBase), tipoPelicula(_tipoPelicula){}

Pelicula::Pelicula(const Pelicula &copia) : codigo(autonumerico++), titulo(copia.titulo), director(copia.director), estreno(copia.estreno), precioBase(copia.precioBase), tipoPelicula(copia.tipoPelicula){}

Pelicula::~Pelicula(){}

void Pelicula::listarInformacion()
{
    cout << "----------------INFORMACIÓN DE LA PELÍCULA----------------" << endl;
    cout << "Código: " << codigo << endl;
    cout << "Título: " << titulo << endl;
    cout << "Precio: " << calcularCosto() << endl;
    cout << "Sobre el director:" << endl;
    cout << "Nombre: " << director.GetNombre() << endl;
    cout << "Biografia: " << director.GetBiografia() << endl;
    cout << "Edad: " << director.GetEdad() << endl;
    cout << "----------------FIN DE LA INFORMACIÓN-----------" << endl;
}

float Pelicula::calcularCosto()
{
    float costo = precioBase;
    if (tipoPelicula == 'I')
    {
        costo *= 1.3;
    }else if (!estreno)
    {
        costo *= .8;
    }
    return costo;
}
