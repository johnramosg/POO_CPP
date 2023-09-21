// Evita doble declaracion
#ifndef _COLA_NUMEROS_H
#define _COLA_NUMEROS_H
#include <string>
#include <queue>
using namespace std;

class Cola{
  // Atributos
  private:
    queue <int> caracteristica;
  // Metodos
  public:
    Cola();
    ~Cola();
    void encolar(int valorNumero);
    void desencolar();
    void vaciarCola();
    void imprimirCola();
};

#endif