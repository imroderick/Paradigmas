#pragma once

int typedef item;
class Nodo
{
public:
    item dato;
    Nodo *siguiente;
    
    Nodo(item valor);
    ~Nodo();
};