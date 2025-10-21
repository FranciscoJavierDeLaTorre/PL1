#ifndef COLA_HPP
#define COLA_HPP

#include "NodoCola.hpp"
#include <iostream>
using namespace std;

class Cola
{
public:
    Cola();
    ~Cola();
    void insertar(Aficionado afic);
    Aficionado extraer();
    Aficionado primero();
    void mostrar();
    int getLongitud();
    bool estaVacia();

private:
    pnodoCola primeroPtr;
    pnodoCola ultimo;
    int longitud;
};

#endif // COLA_HPP