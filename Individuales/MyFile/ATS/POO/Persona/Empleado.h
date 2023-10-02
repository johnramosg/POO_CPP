#ifndef _Empleado_H_
#define _Empleado_H_
#include "Persona.h"

class Empleado : public Persona
{
private: // atributos
  string puesto;
  int sueldo;

public:                                                         // metodos
  Empleado(string nombre, int edad, string puesto, int sueldo); // Constructor
  void mostrarDatosEmpleado();
};
#endif