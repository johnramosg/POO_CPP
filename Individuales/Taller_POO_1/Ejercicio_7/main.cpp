#include <iostream>
#include <string>
#include "CalificaEmpleados.h"
using namespace std;
int main()
{
  string calificacion;
  CalificaEmpleados calificacionAnalizada("");
  cin >> calificacion;
  cout << calificacionAnalizada.analizarCalificacion(calificacion) << endl;
}