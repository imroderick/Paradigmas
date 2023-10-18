#include "Evento.h"

float Evento::calcularPrecioPorTarjeta()
{
    float precioTarjeta = 0;
    for (size_t i = 0; i < indice; i++)
    {
        precioTarjeta += listadoServicios[i]->GetMontoBase();
    }
    precioTarjeta *= comision;
    return precioTarjeta;
}

void Evento::MostrarInfo()
{
    cout << "Codigo de evento: " << codigo << endl;
    cout << "Descripcion: " << descripcion << endl;
    fecha->MostrarFecha();
    cout << "Cantidad de servicios contratados: " << indice << endl;
}

Evento::Evento() : indice(0){}

Evento::Evento(string _descripcion, Fecha *_fecha, int _invitados) : indice(0)
{
    descripcion = _descripcion;
    fecha = _fecha;
    invitados = _invitados;
}

Evento::~Evento(){}

void Evento::AgregarServicio(Servicio *nuevoServicio)
{
    listadoServicios[indice] = nuevoServicio;
    indice++;
}

Fecha Evento::GetFecha()
{
    return *fecha;
}
