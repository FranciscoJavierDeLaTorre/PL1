#include "Cola.hpp"

Cola::Cola()
{
    primeroPtr = NULL;
    ultimo = NULL;
    longitud = 0;
}

void Cola::insertar(int v)
{
    pnodoCola nuevo = new NodoCola(v);
    
    if(ultimo)
        ultimo->siguiente = nuevo;
    
    ultimo = nuevo;
    
    if(!primeroPtr)
        primeroPtr = nuevo;
    
    longitud++;
}

int Cola::extraer()
{
    pnodoCola nodo;
    int v;
    
    if(!primeroPtr)
        return 0;
    
    nodo = primeroPtr;
    primeroPtr = nodo->siguiente;
    v = nodo->valor;
    
    if(!primeroPtr)
        ultimo = NULL;
    
    longitud--;
    delete nodo;
    return v;
}

int Cola::primero()
{
    if(!primeroPtr)
        return 0;
    return primeroPtr->valor;
}

void Cola::mostrar()
{
    pnodoCola aux = primeroPtr;
    cout << "\tEl contenido de la cola es: ";
    while(aux) {
        cout << "-> " << aux->valor;
        aux = aux->siguiente;
    }
    cout << endl;
}

int Cola::getLongitud()
{
    return this->longitud;
}

Cola::~Cola()
{
    pnodoCola aux;
    while(primeroPtr) {
        aux = primeroPtr;
        primeroPtr = primeroPtr->siguiente;
        delete aux;
    }
}