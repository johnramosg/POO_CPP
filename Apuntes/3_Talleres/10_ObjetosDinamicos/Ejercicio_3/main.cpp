/**
Archivo: main.cpp
Autor: Carlos Hernandez
Fecha creacion: 2022/02/07
Fecha ultima modificacion: 2022/02/07
licencia: GNU-GPL
*/

/**
Historia: Queremos alojar los promedios de n estudiante, para luego mostrarlos
*/

#include "Escuela.h"
#include <string>
// Funcion main
int main()
{
  string aux;
  getline(cin,aux);
  cout << aux << endl;


  Escuela *miEscuela = new Escuela();
  miEscuela->alojarEstudiantes();
  miEscuela->mostrarEstudiantes();
  delete miEscuela;
  miEscuela = nullptr;

  return 0;
}
