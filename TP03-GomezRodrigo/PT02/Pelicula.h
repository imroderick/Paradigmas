#include <iostream>
#include "Persona.h"
using std::string, std::cin, std::cout, std::endl;

class Pelicula
{
private:
    static int autonumerico;
    int codigo;
    string titulo;
    Persona director;
    bool estreno;
    float precioBase;
    char tipoPelicula;
public:
    Pelicula(string _titulo, Persona _director, bool _estreno, float _precioBase, char _tipoPelicula);
    Pelicula(const Pelicula &copia);
    ~Pelicula();

    void listarInformacion();
    float calcularCosto();
};