#include <iostream>
#include "Empresa.h"
using namespace std;

int main()
{
    Servicio *servicioPrueba = new Servicio(1, "Servicio de prueba", 100);
    Servicio *servicioPrueba2 = new Servicio(2, "Servicio chiquito", 7000);

    // Empresa TrieJuegos;

    // TrieJuegos.AgregarEvento("desc", new Fecha(1,10,2001), 23, "nombre corporativo", true);
    // TrieJuegos.AgregarEvento("desc2", new Fecha(2,5,1997), 15, "nombre corporativo no benefico", false);
    // TrieJuegos.AgregarEvento("desc personal", new Fecha(6,5,3050), 90, 105);

    // Evento *eventoChiquitoCBenefico = TrieJuegos.GetEventoPorCodigo(0);
    // Evento *eventoChiquitoC = TrieJuegos.GetEventoPorCodigo(1);
    // Evento *eventoChiquitoP = TrieJuegos.GetEventoPorCodigo(2);

    // if (eventoChiquitoC)
    // {
    //     eventoChiquitoC->AgregarServicio(servicioPrueba);
    //     eventoChiquitoC->AgregarServicio(servicioPrueba2);
    // }
    
    // if (eventoChiquitoCBenefico)
    // {
    //     eventoChiquitoCBenefico->AgregarServicio(servicioPrueba);
    // }

    // if (eventoChiquitoP)
    // {
    //     eventoChiquitoCBenefico->AgregarServicio(servicioPrueba2);
    // }

    // TrieJuegos.MostrarRecibo(5);

}
