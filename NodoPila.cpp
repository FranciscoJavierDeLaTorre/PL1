#include "NodoPila.hpp"

NodoPila::NodoPila(const Aficionado& a, NodoPila* sig)
{
    valor = a;
    siguiente = sig;
}

NodoPila::~NodoPila()
{
}