#pragma once

int typedef item;
class Nodo
{
private:
    item dato;
    Nodo *siguiente;
public:
    Nodo(item valor);
    ~Nodo();

    item Dato();
};