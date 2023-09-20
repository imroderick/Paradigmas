#include <iostream>
using namespace std;

class Pelicula
{
private:
    static int autonumerico;
    int codigo;
    string titulo;
    string director;
    bool estreno;
    float precioBase;
    char tipoPelicula;
public:
    Pelicula();
    Pelicula(string _titulo, string _director, bool _estreno, float _precioBase, char _tipoPelicula);
    Pelicula(Pelicula &co);

    void listarInformacion();
    float calcularCosto();

    ~Pelicula();
};

Pelicula::Pelicula()
{
    codigo = 0;
    autonumerico++;
}

Pelicula::Pelicula(string _titulo, string _director, bool _estreno, float _precioBase, char _tipoPelicula)
{
    codigo = autonumerico;
    autonumerico++;
    titulo = _titulo;
    director = _director;
    estreno = _estreno;
    precioBase = _precioBase;
    tipoPelicula = _tipoPelicula;
}

Pelicula::Pelicula(Pelicula &co)
{
    codigo = autonumerico;
    autonumerico++;
    titulo = co.titulo;
    director = co.director;
    estreno = co.estreno;
    precioBase = co.precioBase;
    tipoPelicula = co.tipoPelicula;
}

void Pelicula::listarInformacion()
{
    cout << "----------------INFORMACIÓN DE LA PELÍCULA----------------" << endl;
    cout << "Código: " << this->codigo << endl;
    cout << "Título: " << this->titulo << endl;
    cout << "Director: " << this->director << endl;
    cout << "Precio: " << this->calcularCosto() << endl;
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

Pelicula::~Pelicula()
{
}

int Pelicula::autonumerico = 0;