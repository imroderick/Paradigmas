#pragma once
#include "Evento.h"

class EventoCorporativo : public Evento
{
private:
    string nombre;
    bool esBenefico;
    const int minimo = 100;
    const float descuentoBenefico = 0.15;
public:
    EventoCorporativo();
    EventoCorporativo(string _descripcion, Fecha *_fecha, int _invitados, string _nombre, bool _esBenefico);
    ~EventoCorporativo();

    virtual void MostrarInfoCompleta();
    float CalcularTotal();
};