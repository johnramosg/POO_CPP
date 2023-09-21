#include <iostream>
#include <string>
#include "CalificaEmpleados.h"
using namespace std;

CalificaEmpleados::CalificaEmpleados(string calificacion)
{
  calificacionEmpleado = calificacion;
}

string CalificaEmpleados::analizarCalificacion(string calificacionEmpleado)
{
  if (calificacionEmpleado == "a")
  {
    return "aceptable";
  }
  else if (calificacionEmpleado == "b")
  {
    return "buena";
  }
  else if (calificacionEmpleado == "e")
  {
    return "excelente";
  }
  else
  {
    return "?";
  }
}