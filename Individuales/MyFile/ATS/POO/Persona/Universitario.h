#ifndef _Universitario_H_
#define _Universitario_H_

#include "Estudiante.h"

class Universitario : public Estudiante
{
private:
  string semestre;
  string carrera;

public:
  Universitario(string nombre, int edad, string cosigo, float notafinal, string semestre, string carrera);
  void mostrarDatosUniversitario();
};

#endif