#include <iostream>
#include <cstddef>
#include "Aficionado.hpp"
using namespace std;

class NodoCola
{
public:
    NodoCola(Aficionado afic, NodoCola* sig = NULL);
    ~NodoCola();

private:
    int valor;
    NodoCola* siguiente;
    friend class Cola;
};

typedef NodoCola* pnodoCola;