#ifndef _PILA_H_
#define _PILA_H_
#include<stack>
#include<iostream>
using namespace std;

class Pila
{
  // Atributos
  private:
    stack <int> caracteristica;

  // Metodo
  public:
    Pila();
    ~Pila();
    void apilar(int numero);
    void desapilar();
    void imprimirPila();
    void vaciarPila();
    void falsoDesapilar();
    void tamano();
};

#endif