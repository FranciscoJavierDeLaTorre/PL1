#include <iostream>
using namespace std;

class NodoPila
{
public:
    NodoPila(const Aficionado& a, NodoPila* sig = NULL);
    ~NodoPila();

private:
    Aficionado valor;
    NodoPila* siguiente;
    friend class Pila;
};

typedef NodoPila* pnodoPila;