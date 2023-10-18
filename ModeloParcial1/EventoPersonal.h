#pragma once
#include "Evento.h"

class EventoPersonal : public Evento
{
private:
    int adicionales;
    const float descuentoAdicionales = 0.6;
public:
    EventoPersonal();
    EventoPersonal(string _descripcion, Fecha *_fecha, int _invitados, int _adicionales);
    ~EventoPersonal();

    float CalcularTotal();
    virtual void MostrarInfoCompleta();
};