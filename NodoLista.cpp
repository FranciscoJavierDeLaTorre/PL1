#include "NodoLista.hpp"

NodoLista::NodoLista(Aficionado afic, NodoLista* sig)
{
    aficionado = afic;
    siguiente = sig;
}

NodoLista::~NodoLista()
{
}