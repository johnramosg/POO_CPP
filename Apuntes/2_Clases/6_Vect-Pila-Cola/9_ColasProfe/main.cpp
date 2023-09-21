#include "colas.h"
#include <iostream>
using namespace std;

int main(){
  Cola objeto;

  objeto.encolar(5);
  objeto.encolar(1);
  objeto.encolar(3);

  objeto.imprimirCola();

  objeto.desencolar();

  objeto.imprimirCola();

  objeto.encolar(7);

  objeto.imprimirCola();
}
