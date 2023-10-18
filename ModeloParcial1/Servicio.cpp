#include "Servicio.h"

Servicio::Servicio(){}

Servicio::Servicio(int _codigo, string _descripcion, float _montoBase) : codigo(_codigo), descripcion(_descripcion), montoBase(_montoBase){}

Servicio::Servicio(const Servicio &copia): codigo(copia.codigo), descripcion(copia.descripcion), montoBase(copia.montoBase){}

Servicio::~Servicio(){}

float Servicio::GetMontoBase(){ return montoBase; }
