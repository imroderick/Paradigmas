#include "EventoPersonal.h"

EventoPersonal::EventoPersonal(){}

EventoPersonal::EventoPersonal(string _descripcion, Fecha *_fecha, int _invitados, int _adicionales) : Evento(_descripcion, _fecha, _invitados)
{
    adicionales = _adicionales;
}

EventoPersonal::~EventoPersonal(){}

float EventoPersonal::CalcularTotal()
{
    float precioTotal = 0;
    float precioTarjeta = calcularPrecioPorTarjeta();
    precioTotal = precioTarjeta * invitados + precioTarjeta * descuentoAdicionales;
    return precioTotal;
}

void EventoPersonal::MostrarInfoCompleta()
{
    cout << "Invitados Adicionales: " << adicionales << endl;
    MostrarInfo();
}
