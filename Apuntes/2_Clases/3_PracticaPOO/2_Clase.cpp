// POO en C++

#include <iostream>
#include <stdlib.h>
using namespace std;

class Persona
{
  // Atributos
private:
  int edad;
  string nombre;
  // Metodos
public:
  Persona(int, string); //Constructor
  void leer();
  void correr();
};

// Constructor, sirve para inicializar los atributos
Persona::Persona(int _edad, string _nombre)
{
  edad = _edad;
  nombre = _nombre;
}
// Metodos
void Persona::leer()
{
  cout << "Me llamo " << nombre << " y estoy leyendo un libro" << endl;
}

void Persona::correr()
{
  cout << "Me llamo " << nombre << ", tengo " << edad << " y estoy corriendo una maraton" << endl;
}

// Funcion main
int main()
{
  Persona p1 = Persona(20, "Alejando");
  Persona p2(19, "Maria");
  Persona p3(99, "Bausticio");

  p1.leer();
  p2.correr();
  p3.correr();

  system("pause");
  return 0;
}
