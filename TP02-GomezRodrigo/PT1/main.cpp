#include <iostream>
#include "CuentaObjeto.h"
using namespace std;

int main(int argc, char const *argv[])
{
    cout << endl << "..." << endl;

    CuentaObjeto objeto1;
    CuentaObjeto::mostrarResumen;
    {
        CuentaObjeto objeto2(objeto1);
        CuentaObjeto::mostrarResumen;
        CuentaObjeto *objeto3 = new CuentaObjeto();
        *objeto3 = objeto2.metodo(*objeto3);
        CuentaObjeto::mostrarResumen();
    }
    CuentaObjeto::mostrarResumen();
    cout << "..." << endl;
    return 0;
}