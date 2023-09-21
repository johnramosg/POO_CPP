#include "colas.h"
#include <iostream>
#include <string>
#include <queue>
using namespace std;

Cola::Cola(){
  caracteristica.empty();
}

Cola::~Cola(){
}

void Cola::encolar(int valorNumero){
  caracteristica.push(valorNumero);
  cout << "Se adiciono un elemento a la cola" << endl;
}

void Cola::desencolar()
{
  caracteristica.pop();
  cout << "Se elimino un elemento de la cola" << endl;
}

void Cola::vaciarCola()
{
  caracteristica.empty();
}

void Cola::imprimirCola()
{
  int aux;

  // Reotrnar tamaño de la cola
  for (int i = 0; i < caracteristica.size(); i++)
  {
    aux = caracteristica.front();
    caracteristica.pop();
    cout << aux << ", ";
    caracteristica.push(aux);
  }
  cout << endl;
}
