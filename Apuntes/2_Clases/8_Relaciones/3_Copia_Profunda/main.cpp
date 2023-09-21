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
#include "Persona.h"
#include "Libro.h"
// #include <iostream>
// using namespace std;
// #include <iomanip>
// #include <string.h>
// #include <stdlib.h>
// #include <string>

// Funcion main
int main()
{
  Libro *libro = new Libro("Cien años","Marquez");

  Persona ana(30);
  ana.comprar(libro);

  Persona pepe(25);
  pepe.copiaProfunda(ana);

  return 0;
}
