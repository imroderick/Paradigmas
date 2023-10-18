#pragma once
#include "EventoCorporativo.h"
#include "EventoPersonal.h"
#define MaximoEventos 10

class Empresa
{
private:
    string nombre;
    Evento *listadoEventos[MaximoEventos];
    int indice;
public:
    Empresa();
    Empresa(string _nombre);
    ~Empresa();

    void AgregarEvento(string _descripcion, Fecha *_fecha, int _invitados, string _nombre, bool _esBenefico); //corporativo 
    void AgregarEvento(string _descripcion, Fecha *_fecha, int _invitados, int _adicionales); //personal 
    void MostrarRecibo(int mes);
    Evento *GetEventoPorCodigo(int codigo);
};