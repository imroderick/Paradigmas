#include "Pelicula.h"
#include <iostream>
using namespace std;

int main()
{
    Pelicula pelicula1;
    pelicula1.listarInformacion();

    Pelicula *pelicula2 = new Pelicula("esto es un titulo", "esto es un director", false, 1000, 'N');
    pelicula2->listarInformacion();

    Pelicula pelicula3 ("titulo de ejemplo", "director de ejemplo", true, 1000, 'I');
    pelicula3.listarInformacion();

    Pelicula pelicula4(pelicula3);
    pelicula4.listarInformacion();
}
