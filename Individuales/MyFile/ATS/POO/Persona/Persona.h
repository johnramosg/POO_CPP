#ifndef _Persona_H_
#define _Persona_H_
#include <iostream>

using namespace std;

class Persona
{
private: // atributos
  string nombre;
  int edad;

public:                             // metodos
  Persona(string nombre, int edad); // Constructor
  void mostrarDatosPersona();
  ~Persona(); // Destructor
};
#endif