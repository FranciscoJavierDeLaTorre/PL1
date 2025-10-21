#include <iostream>
#include "Pila.hpp"
using namespace std;

Pila::Pila()
{
    ultimo = nullptr;
    longitud = 0;
}

void Pila::insertar(Aficionado afic)
{
    pnodoPila nuevo = new NodoPila(a, ultimo)
    nuevo = new NodoPila(a, ultimo);
    ultimo = nuevo;
    longitud++;
}

int Pila::extraer()
{
    if (!ultimo){
		cout << "La pila esta vacia." << endl;
		return Aficionado();
		}
	pnodoPila nodo = ultimo;
	ultimo = nodo ->siguiente;
	
	Aficionado a = nodo->valor;
	delete nodo;
	longitud--;
	return a;
}

int Pila::cima()
{
    if (!ultimo) {
		cout << "la pila esta vacia." << endl;
		return Aficionado();
		}
		return ultimo->valor
}

void Pila::mostrar()
{
    pnodoPila aux = ultimo;
    cout << "\tEl contenido de la pila es: ";
    while(aux) {
        cout << "-> " << aux->valor.mostrar();
        aux = aux->siguiente;
    }
    cout << endl;
}

int Pila::getLongitud()
{
    return this->longitud;
}

Pila::~Pila()
{
    pnodoPila aux;
    while(ultimo) {
        aux = ultimo;
        ultimo = ultimo->siguiente;
        delete aux;
    }
}