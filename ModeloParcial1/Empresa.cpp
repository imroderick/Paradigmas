#include "Empresa.h"

Empresa::Empresa() : indice(0){}

Empresa::Empresa(string _nombre) : indice(0)
{
    nombre = nombre;
}

Empresa::~Empresa()
{
    for (size_t i = 0; i < indice; i++)
    {
        delete listadoEventos[i]; 
    }
}

void Empresa::AgregarEvento(string _descripcion, Fecha *_fecha, int _invitados, string _nombre, bool _esBenefico)
{
    Evento *nuevoEvento = new EventoCorporativo(_descripcion, _fecha, _invitados, _nombre, _esBenefico);
    listadoEventos[indice] = nuevoEvento;
    indice++;
}

void Empresa::AgregarEvento(string _descripcion, Fecha *_fecha, int _invitados, int _adicionales)
{
    Evento *nuevoEvento = new EventoPersonal(_descripcion, _fecha, _invitados, _adicionales);
    listadoEventos[indice] = nuevoEvento;
    indice++;
}

void Empresa::MostrarRecibo(int mes)
{
    float recaudacion = 0;
    for (int i = 0; i < indice; i++)
    {
        if (listadoEventos[i]->GetFecha().GetMes() == mes)
        {
            listadoEventos[i]->MostrarInfoCompleta();
            recaudacion += listadoEventos[i]->CalcularTotal();
        }
    }
    cout << "Recaudacion Total: " << recaudacion << endl;
}

Evento *Empresa::GetEventoPorCodigo(int codigo)
{
    Evento *eventoAuxiliar = nullptr;
    for (size_t i = 0; i < indice; i++)
    {
        if (listadoEventos[i]->GetCodigo() == codigo)
        {
            eventoAuxiliar = listadoEventos[i];
        }
    }
    return eventoAuxiliar;
}