/**
Archivo: main.cpp
Autor: Carlos Hernandez
Fecha creacion:
Fecha ultima modificacion:
licencia: GNU-GPL
*/

/**
Historia: ESCRIBIR HISTORIA
*/
#include "clase.h"

// Funcion main
int main()
{
  string aux = "\t";
  int auxnum = 4;
  for(int i = 0; i<auxnum;i++){
    aux += aux;
  }
  cout << "hola" << aux << "hola";

  return 0;
}
