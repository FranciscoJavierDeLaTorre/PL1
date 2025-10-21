#include "NodoCola.hpp"

class Cola
{
public:
    Cola();
    ~Cola();
    void insertar(Aficionado afic);
    int extraer();
    int primero();
    void mostrar();
    int getLongitud();

private:
    pnodoCola primeroPtr;
    pnodoCola ultimo;
    int longitud;
};