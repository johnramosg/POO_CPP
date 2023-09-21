// Metodos Constructores (Getters) y modificadores (Setters)
// EL CONSTRUCTOR SIEMPRE DEBE CREARSE, ASI SEA VACIO PERO SIEMPRE DEBE CREARSE.

#include <iostream>
#include <stdlib.h>
using namespace std;

class Punto
{
private: //Atribbutos
  int x, y;

public:
  Punto(); //Constructor
  void setPunto(int, int);
  int getPuntoX();
  int getPuntoY();
};

Punto::Punto() {}

// Establecemos valores a los atributos
void Punto::setPunto(int _x, int _y)
{
  x = _x;
  y = _y;
}

int Punto::getPuntoX()
{
  return x;
}

int Punto::getPuntoY()
{
  return y;
}

// Funcion main
int main()
{

  Punto punto1;
  punto1.setPunto(15,10);
  cout << punto1.getPuntoX()<<endl;
  cout << punto1.getPuntoY() << endl;

  system("pause");
  return 0;
}
