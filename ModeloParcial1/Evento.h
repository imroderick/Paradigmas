#pragma once
#include <iostream>
#include "Fecha.h"
#include "Servicio.h"
#define MaximoServicios 5

class Evento
{
private:
    static int autonumerico;
    int codigo;
    string descripcion;
    Fecha *fecha;
    Servicio *listadoServicios[MaximoServicios];
    int indice;
    const float comision = 1.1;
protected:
    int invitados;
    float calcularPrecioPorTarjeta();
    void MostrarInfo();
public:
    Evento();
    Evento(string _descripcion, Fecha *_fecha, int _invitados);
    ~Evento();

    int GetCodigo() {return codigo;}
    void AgregarServicio(Servicio *nuevoServicio);
    virtual float CalcularTotal() = 0;
    virtual void MostrarInfoCompleta() = 0;
    Fecha GetFecha();
};