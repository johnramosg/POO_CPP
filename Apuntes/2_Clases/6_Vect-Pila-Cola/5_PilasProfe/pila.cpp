#include <stack>
#include <iostream>
#include "pila.h"
using namespace std;

Pila::Pila()
{
  caracteristica.empty();
}

Pila::~Pila()
{
}

// APILAR
void Pila::apilar(int numero)
{
  caracteristica.push(numero);
  cout << "El numero se apilo" << endl;
}

// DESAPILAR
void Pila::desapilar()
{
  caracteristica.pop();
  cout << "El numero se desapilo" << endl;
}
void Pila::tamano()
{
  cout << "Tamaño pila: " << caracteristica.size() << endl;
};

void Pila::imprimirPila()
{
  int aux;

  // Reotrnar tamaño de la cola
  for (int i = 0; i < caracteristica.size(); i++)
  {
    aux = caracteristica.top();
    cout << aux;
    caracteristica.pop();
    cout << aux << ", ";
    caracteristica.push(aux);
  }
  cout << endl;
}

void Pila::vaciarPila()
{
  caracteristica.empty();
}