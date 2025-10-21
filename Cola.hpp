#include "NodoCola.hpp"
#include "Aficionado.hpp"

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

private:
    pnodoCola primeroPtr;
    pnodoCola ultimo;
    int longitud;
};