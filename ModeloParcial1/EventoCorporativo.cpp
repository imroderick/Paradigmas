#include "EventoCorporativo.h"

EventoCorporativo::EventoCorporativo(){}

EventoCorporativo::EventoCorporativo(string _descripcion, Fecha *_fecha, int _invitados, string _nombre, bool _esBenefico) : Evento(_descripcion, _fecha, _invitados)
{
    nombre = _nombre;
    esBenefico = _esBenefico;
}

EventoCorporativo::~EventoCorporativo(){}

float EventoCorporativo::CalcularTotal()
{
    float precioTotal = 0;
    float precioTarjeta = calcularPrecioPorTarjeta();
    precioTotal = invitados < minimo ? precioTarjeta * minimo : precioTarjeta * invitados;
    precioTotal = esBenefico ? precioTotal * descuentoBenefico : precioTotal; 
    return precioTotal;
}

void EventoCorporativo::MostrarInfoCompleta()
{
    cout << "Nombre: " << nombre << endl;
    cout << "Es benefico: " << esBenefico << endl;
    MostrarInfo();
}
