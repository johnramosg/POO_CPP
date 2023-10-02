#include "Empleado.h"

Empleado::Empleado(string _nombre, int _edad, string _puesto, int _sueldo) : Persona(_nombre, _edad)
{
  puesto = _puesto;
  sueldo = _sueldo;
}

void Empleado::mostrarDatosEmpleado()
{
  mostrarDatosPersona();
  cout << "Puesto: " << puesto << endl;
  cout << "Sueldo: " << sueldo << endl;
}