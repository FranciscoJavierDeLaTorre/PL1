#include <iostream>
#include <cstddef>
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