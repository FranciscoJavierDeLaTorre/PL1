#ifndef NODOCOLA_HPP
#define NODOCOLA_HPP

#include "Aficionado.hpp"

// Declaración de la estructura del nodo de la cola
class NodoCola {
public:
    Aficionado aficionado;
    NodoCola* siguiente;

    // Constructor
    NodoCola(Aficionado afic) {
        aficionado = afic;
        siguiente = nullptr;
    }
};

// Definición del tipo puntero a NodoCola para simplificar
typedef NodoCola* pnodoCola;

#endif // NODOCOLA_HPP