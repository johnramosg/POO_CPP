#include "Persona.h"

Persona::Persona(string _nombre, int _edad)
{
  nombre = _nombre;
  edad = _edad;
}

void Persona::mostrarDatosPersona()
{
  cout << "Nombre: " << nombre << endl;
  cout << "Edad: " << edad << endl;
}
Persona::~Persona()
{
}